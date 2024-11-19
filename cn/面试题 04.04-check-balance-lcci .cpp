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
    int height(TreeNode*p){
        if (p== nullptr)
            return 0;
        return max(height(p->left), height(p->right))+1;
    }
    bool isBalanced(TreeNode* root) {
        if (root== nullptr)
            return true;
        if (!root->left&&!root->right)
            return true;
        else if (!root->left||!root->right) {
            if (root->left&& height(root->left)>1)
                return false;
            if (root->right&& height(root->right)>1)
                return false;
            return true;
        }
        else{
            if (abs(height(root->left)- height(root->right))>1)
                return false;
            return isBalanced(root->left)&& isBalanced(root->right);
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}