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
    pair<double,double> dfs(TreeNode*p){
        if (!p)
            return {0,0};
        if (!p->left&&!p->right)
            return {p->val,p->val};
        auto l= dfs(p->left);
        auto r= dfs(p->right);
        return {max(max(l.first,r.first),(l.second+r.second)/2)+p->val,l.second+r.second+p->val};
    }
    double minimalExecTime(TreeNode* root) {
        return dfs(root).first;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}