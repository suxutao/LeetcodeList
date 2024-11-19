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
    int ans=0;
    map<pair<TreeNode*,bool>,int>m;
    int fan(TreeNode*p,bool dir){
        if (!p)
            return 0;
        if (!p->left&&!p->right)
            return 1;
        if (m.contains({p,dir}))
            return m[{p,dir}];
        if (dir){
            int t=fan(p->left,0)+1;
            ans= max(ans,t-1);
            return m[{p,dir}]=t;
        }else{
            int t=fan(p->right,1)+1;
            ans= max(ans,t-1);
            return m[{p,dir}]=t;
        }
    }
    void dfs(TreeNode*p){
        if (!p||!p->left&&!p->right) return;
        fan(p,0);
        fan(p,1);
        dfs(p->left);
        dfs(p->right);
    }
    int longestZigZag(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}