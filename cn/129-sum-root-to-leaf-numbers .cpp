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
    int ans,temp;
    void dfs(TreeNode*p){
        temp+=p->val;
        if (!p->left&&!p->right){
            ans+=temp;
            temp-=p->val;
            return;
        }
        temp*=10;
        if (p->left)
            dfs(p->left);
        if (p->right)
            dfs(p->right);
        temp/=10;
        temp-=p->val;
    }
    int sumNumbers(TreeNode* root) {
        ans=0;temp=0;
        dfs(root);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}