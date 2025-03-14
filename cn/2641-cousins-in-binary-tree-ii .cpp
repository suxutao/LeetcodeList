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
    TreeNode* replaceValueInTree(TreeNode* root) {
        vector<TreeNode*> q = {root};
        root->val = 0;
        while (!q.empty()) {
            vector<TreeNode*> q2;
            int sum = 0;
            for (auto fa : q) {
                if (fa->left) {
                    q2.push_back(fa->left);
                    sum += fa->left->val;
                }
                if (fa->right) {
                    q2.push_back(fa->right);
                    sum += fa->right->val;
                }
            }
            for (auto fa : q) {
                int child_sum = (fa->left ? fa->left->val : 0) +
                                (fa->right ? fa->right->val : 0);
                if (fa->left) {
                    fa->left->val = sum - child_sum;
                }
                if (fa->right) {
                    fa->right->val = sum - child_sum;
                }
            }
            q = move(q2);
        }
        return root;
    }
};

//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}