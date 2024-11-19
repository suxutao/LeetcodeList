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
    pair<int,int> dfs(TreeNode*p){
        if (!p->left&&!p->right)
            return {1,p->val};
        int a=INT_MIN,b=INT_MIN,c=INT_MIN,d=INT_MIN,fan=1;
        if (p->left){
            auto l= dfs(p->left);
            a=l.first;b=l.second;
            if (b==p->val)
                fan= max(fan,a+1);
        }
        if (p->right){
            auto r= dfs(p->right);
            c=r.first;d=r.second;
            if (d==p->val)
                fan= max(fan,c+1);
        }
        ans= max(ans, (b==p->val?a:0)+(d==p->val?c:0));
        return {fan,p->val};
    }
    int longestUnivaluePath(TreeNode* root) {
        if (!root) return 0;
        dfs(root);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}