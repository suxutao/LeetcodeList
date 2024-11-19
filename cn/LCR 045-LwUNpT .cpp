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
    int depth,ans;
    void dfs(TreeNode*p,int dep){
        if (!p)return;
        if (!p->left&&!p->right){
            if (dep>depth) {
                ans = p->val;
                depth=dep;
            }
            return;
        }
        dfs(p->left,dep+1);
        dfs(p->right,dep+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        depth=-1;
        dfs(root,0);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}