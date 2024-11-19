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
    vector<int>v1,v2;
    void dfs(TreeNode*p,vector<int>&v){
        if (!p) return;
        dfs(p->left,v);
        if (!p->left&&!p->right)
            v.push_back(p->val);
        dfs(p->right,v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        dfs(root1,v1);
        dfs(root2,v2);
        return v1==v2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}