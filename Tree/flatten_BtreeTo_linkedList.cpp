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
Node* nextright = NULL;
void flatten(Node* root){
    if(root == NULL){
        return;
    }
   
    flatten(root->right);
    flatten(root->left);

    root->left = NULL;
    root->right = nextright;
    nextright = root;
}
void printList(Node* root){
    while(root != NULL){
        cout << root->data << " -> ";
        root = root->right;
    }
    cout<<"NULL";
}
int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildTree(preorder);

    flatten(root);

    cout << "flattened tree: " << endl;
    printList(root);

    return 0;
}


// TIME COMPLEXITY ----- O(n)
//  SPACE COMPLEXITY ----- O(h)   height of tree