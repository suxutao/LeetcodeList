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
    bool zero(TreeNode*p){
        if (p== nullptr)
            return false;
        if (p->val)
            return true;
        else
            return zero(p->left)|| zero(p->right);
    }
    TreeNode* pruneTree(TreeNode* root) {
        if (root== nullptr)
            return nullptr;
        if (!zero(root))
            return nullptr;
        root->left= pruneTree(root->left);
        root->right= pruneTree(root->right);
        return root;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}