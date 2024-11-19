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
    int MaxDepth(TreeNode*p){
        if (p== nullptr)
            return 0;
        return 1+max(MaxDepth(p->right),MaxDepth(p->left));
    }
    bool isBalanced(TreeNode* root) {
        if (root== nullptr)
            return true;
        short a=MaxDepth(root->left)- MaxDepth(root->right);
        if (a>1||a<-1)
            return false;
        return isBalanced(root->left)&&isBalanced(root->right)? true: false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}