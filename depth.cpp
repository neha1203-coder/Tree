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
    if(preorder[idx] = -1){
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return 0;
}
int maxDepth(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftDepth = maxDepth(root->left);
    int rightDepth = maxDepth(root->right);

    return 1 + max(leftDepth, rightDepth);
}
int main(){
    vector<int> preorder = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, -1};
    Node* root = buildTree(preorder);

    int depth = maxDepth(root);
    cout << "maximum depth: " << maxDepth(root) << endl;

    return 0;
}