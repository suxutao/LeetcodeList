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
    vector<int> dfs(TreeNode*p,int k){
        vector<int>v(k+1);
        if (!p)
            return v;
        auto l= dfs(p->left,k);
        auto r= dfs(p->right,k);
        v[0]=ranges::max(l)+ranges::max(r);
        for (int i = 1; i <= k; ++i) {
            for (int j = 0; j < i; ++j) {
                v[i]= max(v[i],l[j]+p->val+r[i-j-1]);
            }
        }
        return v;
    }
    int maxValue(TreeNode* root, int k) {
        auto t= dfs(root,k);
        return ranges::max(t);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}