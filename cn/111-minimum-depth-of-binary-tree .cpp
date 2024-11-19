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
    int minDepth(TreeNode* root) {
        if (root== nullptr)
            return 0;
        else if(root->right!= nullptr&&root->left!= nullptr)
            return 1+min(minDepth(root->left), minDepth(root->right));
        else if (root->left== nullptr&&root->right== nullptr)
            return 1;
        else if (root->right== nullptr)
            return 1+ minDepth(root->left);
        else
            return 1+ minDepth(root->right);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}