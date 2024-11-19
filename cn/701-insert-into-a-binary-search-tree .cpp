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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root== nullptr)
            return new TreeNode(val);
        TreeNode*p=root;
        while(p){
            if (p->val>val&&p->left== nullptr){
                p->left=new TreeNode(val);
                break;
            }else if(p->val>val){
                p=p->left;
            }else if (p->val<val&&p->right== nullptr){
                p->right=new TreeNode(val);
                break;
            }else{
                p=p->right;
            }
        }
        return root;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}