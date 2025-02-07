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
    unordered_map<TreeNode*,int>depth;
    bool isBalanced(TreeNode* root) {
        if (!root){
            return true;
        }
        if (!root->left&&!root->right){
            depth[root]=1;
            return true;
        }
        bool l= isBalanced(root->left);
        bool r= isBalanced(root->right);
        if (l&&r){
            if (abs(depth[root->left]-depth[root->right])>1)
                return false;
            depth[root]= max(depth[root->left],depth[root->right])+1;
            return true;
        }else{
            return false;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}