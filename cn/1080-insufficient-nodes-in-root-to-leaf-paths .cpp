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
    int lim;
    int dfs(TreeNode*u,TreeNode*fa,bool l,int sum){
        if (!u) return INT_MIN;
        if (!u->left&&!u->right){
            if (sum+u->val<lim){
                l?fa->left= nullptr:fa->right= nullptr;
            }
            return u->val;
        }
        int zuo= dfs(u->left,u,1,sum+u->val);
        int zou= dfs(u->right,u,0,sum+u->val);
        zou=INT_MIN?zou:INT_MIN/2;
        zuo=INT_MIN?zuo:INT_MIN/2;
        if (max(zuo,zou)+sum+u->val<lim){
            l?fa->left= nullptr:fa->right= nullptr;
        }
        return max(zuo,zou)+u->val;
    }
    TreeNode* sufficientSubset(TreeNode* root, int limit) {
        lim=limit;
        TreeNode*p=new TreeNode;
        p->left=root;
        dfs(root,p,1,0);
        return p->left;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}