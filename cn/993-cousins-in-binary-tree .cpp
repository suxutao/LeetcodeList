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
    bool isCousins(TreeNode* root, int x, int y) {
        int dx=0,dy=0,depth=1;
        TreeNode*fx,*fy;
        queue<TreeNode*>q;
        q.push(root);
        while (!q.empty()){
            int s=q.size();
            for (int i = 0; i < s; ++i) {
                TreeNode*p=q.front();
                if (!dx&&p->left&&p->left->val==x||p->right&&p->right->val==x){
                    dx=depth;
                    fx=p;
                }else if (!dy&&p->left&&p->left->val==y||p->right&&p->right->val==y){
                    dy=depth;
                    fy=p;
                }
                if (p->left)
                    q.push(p->left);
                if (p->right)
                    q.push(p->right);
                q.pop();
            }
            depth++;
            if (dx&&dy)break;
        }
        if (dx==dy&&fy!=fx)
            return true;
        else
            return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}