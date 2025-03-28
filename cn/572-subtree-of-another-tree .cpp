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
    bool check(TreeNode* root, TreeNode* subRoot){
        if (!root&&!subRoot)
            return true;
        else if (!root||!subRoot)
            return false;
        if (root->val!=subRoot->val)
            return false;
        else
            return check(root->left,subRoot->left)&& check(root->right,subRoot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root)
            return false;
        if (check(root,subRoot))
            return true;
        return isSubtree(root->left,subRoot)|| isSubtree(root->right,subRoot);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}