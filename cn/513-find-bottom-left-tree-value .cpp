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
    int findBottomLeftValue(TreeNode* root) {
        if (!root->left&&!root->right)
            return root->val;
        queue<TreeNode*>q;
        int ans;
        bool first;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            first= true;
            for (int i = 0; i < s; ++i) {
                TreeNode*p=q.front();
                if (first){
                    ans=p->val;
                    first= false;
                }
                if (p->left)
                    q.push(p->left);
                if (p->right)
                    q.push(p->right);
                q.pop();
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}