#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }

};
static int idx = -1;
Node* buildTree(vector<int> preorder){
    idx++;
    if(preorder[idx] == -1){
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
 
}
int maxWidth(Node* root){
    if(root == NULL)
    return 0;
    long long ans = 0;
    queue<pair<Node*, long long >> q;
    q.push({root, 0});

    while(!q.empty()){
        int size = q.size();
        long long start = q.front().second;
        long long end = q.back().second;

        ans = max(ans, end-start+1);
        for(int i = 0; i<size; i++){
            auto temp = q.front();
            q.pop();

            Node* curr = temp.first;
            long long idx = temp.second - start;

            if(curr->left){
                q.push({curr->left, 2*idx});
            }
            if(curr->right){
                q.push({curr->right, 2*idx+1});
            }
        }
    }
    return (int)ans;
}
int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildTree(preorder);

    cout << "maximum width: " << maxWidth(root) << endl;

    return 0;

    
}