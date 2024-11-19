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
    bool dfs(TreeNode*l,TreeNode*r){
        if (!l&&!r)
            return true;
        if (!l||!r)
            return false;
        if (l->val!=r->val)
            return false;
        return dfs(l->left,r->right)&&dfs(l->right,r->left);
    }
    bool checkSymmetricTree(TreeNode* root) {
        if (!root)
            return true;
        return dfs(root->left,root->right);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}