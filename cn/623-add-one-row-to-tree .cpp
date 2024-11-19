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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth==1){
            TreeNode*p=new TreeNode(val);
            p->left=root;
            return p;
        }
        function<void(TreeNode*,int)> dfs=[&](TreeNode*p,int dep){
            if (dep==depth){
                TreeNode*q=new TreeNode(val),*t=p->left;
                p->left=q;
                q->left=t;
                q=new TreeNode(val),t=p->right;
                p->right=q;
                q->right=t;
                return;
            }
            if (p->left)
                dfs(p->left,dep+1);
            if (p->right)
                dfs(p->right,dep+1);
        };
        dfs(root,2);
        return root;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}