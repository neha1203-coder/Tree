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
void morrisInorder(Node* root){
    Node* curr = root;

    while(curr != NULL){
        if(curr->left == NULL){
            cout << curr->data << " ";
            curr = curr->right;
        }
        else{
            Node* pred = curr->left;

            while(pred->right != NULL && pred->right != curr){
                pred = pred->right;
            }
            
            if(pred->right == NULL){
                pred->right = curr;
                curr = curr->left;
            }
            else{
                pred->right = NULL;
                cout << curr->data << " ";
                curr = curr->right;
            }
        }
    }
}

int main(){
    vector<int> preorder = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, -1};
    Node* root = buildTree(preorder);

    cout << "morris inorder traversal: ";
    morrisInorder(root); 
    cout << endl;

    return 0;
}