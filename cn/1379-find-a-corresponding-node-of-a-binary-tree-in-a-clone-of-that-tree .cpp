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
    int n;
    TreeNode* dfs(TreeNode*p){
        if (!p) return nullptr;
        if (p->val==n) return p;
        TreeNode*l= dfs(p->left);
        if (dfs(p->left)) return l;
        l= dfs(p->right);
        return l;
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        n=target->val;
        return dfs(cloned);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}