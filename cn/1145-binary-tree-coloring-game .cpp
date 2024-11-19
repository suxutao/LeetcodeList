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
    unordered_map<TreeNode*,int>m;
    int x;TreeNode*tar;
    void dfs(TreeNode*p){
        if (!p) return;
        if (p->val==x){
            tar=p;
        }
        if (!p->left&&!p->right){
            m[p]=1;
            return;
        }
        dfs(p->left);
        dfs(p->right);
        m[p]=m[p->left]+m[p->right]+1;
    }
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        this->x=x;
        dfs(root);
        return n-m[tar]>m[tar]||m[tar->left]>n-m[tar->left]||m[tar->right]>n-m[tar->right];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}