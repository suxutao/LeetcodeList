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
    using ll = long long;
    const int N=1e9+7;
    ll sum=0,ans=0;
    vector<ll>v;
    ll dfs1(TreeNode*p){
        if (!p)return 0;
        if (!p->left&&!p->right){
            sum+=p->val;
            v.push_back(p->val);
            return p->val;
        }
        ll a=p->val;
        if (p->left)
            a+=dfs1(p->left);
        if (p->right)
            a+=dfs1(p->right);
        v.push_back(a);
        sum+=p->val;
        return a;
    }
    int maxProduct(TreeNode* root) {
        dfs1(root);
        sort(v.begin(), v.end());
        int pos=lower_bound(v.begin(), v.end(),sum/2)-v.begin();
        ans=v[pos]*(sum-v[pos]);
        if (pos)
            ans= max(ans,v[pos-1]*(sum-v[pos-1]));
        return ans%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}