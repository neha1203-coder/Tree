#include <iostream>
using namespace std;

// Definition of TreeNode using struct
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x){
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    int ans = 0;

    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }

        int leftHt = height(root->left);
        int rightHt = height(root->right);

        ans = max(ans, leftHt + rightHt);

        return max(leftHt, rightHt) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return ans;
    }
};

int main(){

    // Creating the binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution obj;

    cout << "Diameter of Binary Tree: " << obj.diameterOfBinaryTree(root);

    return 0;
}


// TIME COMPLEXITY------ O(n)
// SPACE COMPLEXITY------O(h)   height of tree