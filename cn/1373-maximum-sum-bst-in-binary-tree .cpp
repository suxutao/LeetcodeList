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
    pair<pair<bool,int>,pair<int,int>> dfs(TreeNode*p){
        if (!p) return {{1,0},{INT_MAX,INT_MIN}};
        if (!p->left&&!p->right){
            ans= max(ans,p->val);
            return {{1,p->val},{p->val,p->val}};
        }
        int sum=p->val;
        auto l= dfs(p->left);
        auto r= dfs(p->right);
        if (l.first.first&&r.first.first&&l.second.second<p->val&&r.second.first>p->val){
            sum+=l.first.second+r.first.second;
            ans= max(ans,sum);
            return {{1,sum},{l.second.first==INT_MAX?p->val:l.second.first,r.second.second==INT_MIN?p->val:r.second.second}};
        }else{
            return {{0,p->val},{INT_MAX,INT_MIN}};
        }
    }
    int maxSumBST(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}