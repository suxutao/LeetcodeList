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
    unordered_map<TreeNode*,int>u;
    int rob(TreeNode* root) {
        if (!root)
            return 0;
        if (!root->left&&!root->right)
            return root->val;
        if (u[root])
            return u[root];
        int value1=root->val,value2=0;
        if (root->left) {
            value1 += rob(root->left->right);
            value1 += rob(root->left->left);
        }
        if (root->right){
            value1 += rob(root->right->right);
            value1 += rob(root->right->left);
        }
        value2= rob(root->left)+ rob(root->right);
        u[root]= max(value1,value2);
        return max(value1,value2);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}