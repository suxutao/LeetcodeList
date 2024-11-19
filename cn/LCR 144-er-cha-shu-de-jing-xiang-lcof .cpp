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
    void fanzhuan(TreeNode*root){
        if (root== nullptr)
            return;
        fanzhuan(root->left);
        fanzhuan(root->right);
        TreeNode*temp=root->left;
        root->left=root->right;
        root->right=temp;
    }
    TreeNode* mirrorTree(TreeNode* root) {
        fanzhuan(root);
        return root;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}