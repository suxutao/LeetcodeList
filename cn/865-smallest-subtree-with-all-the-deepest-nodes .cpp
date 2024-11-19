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
    using pi = pair<TreeNode *, int>;
    pi dfs(TreeNode*p){
        if (!p)
            return {nullptr,0};
        if (!p->left&&!p->right)
            return {p,1};
        pi left= dfs(p->left);
        pi right= dfs(p->right);
        if (left.second>right.second)
            return {left.first,left.second+1};
        else if (left.second<right.second)
            return {right.first,right.second+1};
        else
            return {p,left.second+1};
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        return dfs(root).first;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}