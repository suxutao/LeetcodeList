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
    bool dfs(TreeNode*p1,TreeNode*p2){
        if (p1== nullptr&&p2== nullptr)
            return true;
        if (p1== nullptr||p2== nullptr)
            return false;
        if (p1->val!=p2->val)
            return false;
        return dfs(p1->left,p2->right)&&dfs(p1->right,p2->left);
    }
    bool isSymmetric(TreeNode* root) {
        if (root== nullptr)
            return true;
        return dfs(root->left,root->right);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}