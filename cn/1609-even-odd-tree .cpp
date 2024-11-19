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
    bool isEvenOddTree(TreeNode* root) {
        int cen=0;
        queue<TreeNode*>q;
        q.push(root);
        while (!q.empty()){
            int sz=q.size();
            int t=INT_MAX,r=INT_MIN;
            for (int i = 0; i < sz; ++i) {
                if (cen&1){
                    TreeNode*p=q.front();
                    q.pop();
                    if (p->val&1)
                        return false;
                    if (p->val>=t)
                        return false;
                    t=p->val;
                    if (p->left)
                        q.push(p->left);
                    if (p->right)
                        q.push(p->right);
                }else{
                    TreeNode*p=q.front();
                    q.pop();
                    if (p->val%2==0)
                        return false;
                    if (p->val<=r)
                        return false;
                    r=p->val;
                    if (p->left)
                        q.push(p->left);
                    if (p->right)
                        q.push(p->right);
                }
            }
            cen++;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}