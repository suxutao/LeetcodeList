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
        if (!root||root==p||root==q)
            return root;
        int a=root->val,b=p->val,c=q->val;
        if (a>b&&a<c||a<b&&a>c)
            return root;
        else if (a>b&&a>c)
            return lowestCommonAncestor(root->left,p,q);
        else
            return lowestCommonAncestor(root->right,p,q);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}