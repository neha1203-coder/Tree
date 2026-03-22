#include <iostream>
#include <vector>
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
void getPaths(Node* root, string path, vector<string> &ans){
    if(root == NULL)
    return;

    if(path.size() == 0){
       path = to_string(root->data);
    }
    else{
        path += "->" + to_string(root->data);
    } 
    if(root->left == NULL && root->right == NULL){
        ans.push_back(path);
        return;
    }
    getPaths(root->left, path, ans);
    getPaths(root->right, path, ans);
}
int main(){
    vector<int> preorder = {1, 2, -1, 5, -1, -1, 3, -1, -1};
    Node* root = buildTree(preorder);

    vector<string> paths;
    getPaths(root, "", paths);
    cout << "binary tree paths:" << endl;
    for(int i = 0; i<paths.size(); i++){
        string p = paths[i];
        cout << p << endl;
    }

    
    return 0;
}