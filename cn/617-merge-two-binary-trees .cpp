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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (!root1&&!root2)
            return nullptr;
        if (!root1||!root2){
            if (root1){
                TreeNode*p= new TreeNode(root1->val);
                p->left= mergeTrees(root1->left, nullptr);
                p->right= mergeTrees(root1->right, nullptr);
                return p;
            }else{
                TreeNode*p= new TreeNode(root2->val);
                p->left= mergeTrees(nullptr, root2->left);
                p->right= mergeTrees(nullptr, root2->right);
                return p;
            }
        }else {
            TreeNode*p= new TreeNode(root1->val + root2->val);
            p->left= mergeTrees(root1->left,root2->left);
            p->right= mergeTrees(root1->right,root2->right);
            return p;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}