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
    int ans=INT_MIN;
    int dfs(TreeNode*p,int sum){
        int l=0,r=0;
        if (p->left)
            l= dfs(p->left,sum+p->val);
        if (p->right)
            r= dfs(p->right,sum+p->val);
        ans= max(ans,l+r+p->val);
        return max(0,max(l,r)+p->val);
    }
    int maxPathSum(TreeNode* root) {
        dfs(root,0);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}