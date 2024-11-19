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
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        while (!q.empty()){
            TreeNode*p=q.front();
            q.pop();
            if (p->left&&p->right){
                q.push(p->left);
                q.push(p->right);
            }else if (p->left||p->right){
                if (p->left){
                    q.push(p->left);
                    break;
                }else{
                    return false;
                }
            }else{
                break;
            }
        }
        while (!q.empty()){
            TreeNode*p=q.front();q.pop();
            if (p->left||p->right)
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}