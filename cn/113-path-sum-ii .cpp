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
    vector<vector<int>>vv;
    vector<int>v;
    int tar;
    void dfs(TreeNode*p,int sum){
        if (!p) return;
        if (!p->left&&!p->right){
            if (sum+p->val==tar) {
                vv.push_back(v);
                vv.back().push_back(p->val);
            }
            return;
        }
        v.push_back(p->val);
        dfs(p->left,sum+p->val);
        dfs(p->right,sum+p->val);
        v.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        tar=targetSum;
        dfs(root,0);
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}