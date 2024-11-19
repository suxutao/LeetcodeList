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
    vector<int>v;
    void dfs(TreeNode*p){
        if (!p)
            return;
        dfs(p->left);
        v.push_back(p->val);
        dfs(p->right);
    }
    int findTargetNode(TreeNode* root, int cnt) {
        dfs(root);
        return v[v.size()-cnt];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}