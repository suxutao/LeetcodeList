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
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
        TreeNode* parent = nullptr;
        TreeNode* cur = root;
        while (cur) {
            if (val > cur->val) {
                if (!parent) {
                    return new TreeNode(val, root, nullptr);
                }
                TreeNode* node = new TreeNode(val, cur, nullptr);
                parent->right = node;
                return root;
            }
            else {
                parent = cur;
                cur = cur->right;
            }
        }
        parent->right = new TreeNode(val);
        return root;
    }
};

//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}