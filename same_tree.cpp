#include <iostream>
using namespace std;

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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL || q == NULL){
            return p == q;
        }

        bool isleftSame = isSameTree(p->left , q->left);
        bool isrightSame = isSameTree(p->right , q->right);

        return isleftSame && isrightSame && p->val == q->val;
    }
};

int main() {

    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);

    TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(3);

    Solution obj;

    if(obj.isSameTree(root1, root2)){
        cout << "Trees are the same";
    } 
    else{
        cout << "Trees are not the same";
    }

    return 0;
}


// TIME COMPLEXITY------- O(n)  no of nodes
// SPACE COMPLEXITY-------O(h)   height of node