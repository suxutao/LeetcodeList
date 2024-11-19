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
    map<int,int>m;
    void dfs(TreeNode*p){
        if (!p)
            return;
        m[p->val]=1;
        dfs(p->left);
        dfs(p->right);
    }
    int numColor(TreeNode* root) {
        dfs(root);
        return m.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}