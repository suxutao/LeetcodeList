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
    int dfs(TreeNode*p,int cen){
        int ans=0;
        if (cen==2){
            ans+=p->val;
        }else{
            if (p->left)
                ans+=dfs(p->left,cen+1);
            if (p->right)
                ans+=dfs(p->right,cen+1);
        }
        return ans;
    }
    int sumEvenGrandparent(TreeNode* root) {
        int ans=0;
        if (!root)
            return 0;
        if (!root->left&&!root->right)
            return 0;
        if (root->val%2==0)
            ans+=dfs(root,0);
        ans+= sumEvenGrandparent(root->left);
        ans+= sumEvenGrandparent(root->right);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}