#include <iostream>
using namespace std;

// Definition of TreeNode
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    bool isIdentical(TreeNode* p, TreeNode* q){
        if(p == NULL || q == NULL){
            return p == q;
        }
        return p->val == q->val 
        && isIdentical(p->left , q->left) 
        && isIdentical(p->right , q->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL || subRoot == NULL){
            return root == subRoot;
        }

        if(root->val == subRoot->val && isIdentical(root, subRoot)){
            return true;
        }

        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};

int main() {

    // Main tree
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(4);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(2);

    // Subtree
    TreeNode* subRoot = new TreeNode(4);
    subRoot->left = new TreeNode(1);
    subRoot->right = new TreeNode(2);

    Solution obj;

    if(obj.isSubtree(root, subRoot)){
        cout << "subRoot is a subtree of root";
    }
    else{
        cout << "subRoot is NOT a subtree of root";
    }

    return 0;
}


// TIME COMPLEXITY-----O(m*n)  m = nodes in main tree
// SPACE COMPLEXITY-----O(h)    height of tree