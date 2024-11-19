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
    int ans;
    pair<int,int> dfs(TreeNode*p){
        if (!p->left&&!p->right)
            return {p->val,p->val};
        auto a=make_pair(INT_MIN,INT_MAX),b= make_pair(INT_MIN,INT_MAX);
        if (p->left) {
            a = dfs(p->left);
            ans= max({ans, abs(p->val-a.first), abs(p->val-a.second)});
        }
        if (p->right){
            b=dfs(p->right);
            ans= max({ans, abs(p->val-b.first), abs(p->val-b.second)});
        }
        return make_pair(max({a.first,b.first,p->val}), min({a.second, b.second, p->val}));
    }
    int maxAncestorDiff(TreeNode* root) {
        ans=0;
        dfs(root);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}