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
    int ans=0;
    unordered_multiset<ll>m{0};
    void dfs(TreeNode*p,ll sum,int target){
        if (!p) return;
        sum+=p->val;
        if (m.contains(sum-target))
            ans+=m.count(sum-target);
        m.insert(sum);
        dfs(p->left,sum,target);
        dfs(p->right,sum,target);
        m.extract(sum);
    }
    int pathSum(TreeNode* root, int targetSum) {
        dfs(root,0,targetSum);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}