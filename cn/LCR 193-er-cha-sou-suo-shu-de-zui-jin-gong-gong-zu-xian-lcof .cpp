#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root==p||root==q||!root){
            return root;
        }
        TreeNode*l= lowestCommonAncestor(root->left,p,q);
        TreeNode*r= lowestCommonAncestor(root->right,p,q);
        if (l&&r)
            return root;
        else if (l||r){
            return l?l:r;
        }
        return nullptr;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}