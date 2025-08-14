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
    pair<TreeNode*,TreeNode*>dfs(TreeNode* root){
        if (!root)
            return {nullptr, nullptr};
        if (!root->left&&!root->right)
            return {root,root};
        auto [l0,l1]= dfs(root->left);
        auto [r0,r1]= dfs(root->right);
        if (l1){
            l1->right=root;
            l1->left= nullptr;
        }
        root->right=r0;
        root->left= nullptr;
        return {l0?l0:root,r1?r1:root};
    }
    TreeNode* convertBiNode(TreeNode* root) {
        return dfs(root).first;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){

    return 0;
}