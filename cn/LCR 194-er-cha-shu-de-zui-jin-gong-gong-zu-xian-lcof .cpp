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
        TreeNode*ans= nullptr;
        function<bool(TreeNode*)> dfs=[&](TreeNode*u){
            if (!u) return false;
            bool l=dfs(u->left),r=dfs(u->right);
            if (u==p||u==q){
                if (l||r)
                    ans=u;
                return true;
            }else{
                if (l&&r){
                    ans=u;
                    return true;
                }else{
                    return l||r;
                }
            }
        };
        dfs(root);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}