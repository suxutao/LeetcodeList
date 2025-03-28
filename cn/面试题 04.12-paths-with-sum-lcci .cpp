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
    int k,ans=0;
    unordered_map<int,int>m;
    void dfs(TreeNode*p,int sum){
        if (!p) return;
        sum+=p->val;
        ans+=m[sum-k];
        m[sum]++;
        dfs(p->left,sum);
        dfs(p->right,sum);
        m[sum]--;
    }
    int pathSum(TreeNode* root, int sum) {
        k=sum;
        m[0]=1;
        dfs(root,0);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}