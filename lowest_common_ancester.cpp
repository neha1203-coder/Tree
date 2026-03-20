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
    if(preorder[idx] == -1);{
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}
Node* LCA(Node* root, Node* p , Node* q){
    if(root == NULL){
        return NULL;
    }
    if(root == p || root == q)
    return root;

    Node* leftLCA = LCA(root->left, p, q);
    Node* rightLCA = LCA(root->right, p, q);

    if(leftLCA != NULL && rightLCA != NULL ){
        return root;
    }
    else if(leftLCA != NULL){
        return leftLCA;
    }else{
        return rightLCA;
    }
}
Node* findNode(Node* root, int val){
    if(root == NULL) return NULL;
    if(root->data == val) return root;

    Node* left = findNode(root->left, val);
    if(left != NULL) return left;

    return findNode(root->right, val);
}
int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);

    int x = 4, y = 5;

    Node* p = findNode(root, x);
    Node* q = findNode(root, y);

    Node* lca = LCA(root , p, q);
    if(lca != NULL){
        cout << "LCA : " << lca->data <<endl;

    }else{
        cout << "LCA not found" << endl;
    }

    
    return 0;
    
}