#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* expandBinaryTree(TreeNode* root) {
        if (!root)
            return nullptr;
        if (!root->left&&!root->right)
            return new TreeNode(root->val);
        TreeNode*p=new TreeNode(root->val);
        if (root->left){
            p->left=new TreeNode(-1);
            p->left->left=expandBinaryTree(root->left);
        }
        if (root->right){
            p->right=new TreeNode(-1);
            p->right->right=expandBinaryTree(root->right);
        }
        return p;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}