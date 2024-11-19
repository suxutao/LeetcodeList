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
    void dfs(TreeNode*p){
        if (!p)
            return;
        dfs(p->left);
        v.push_back(p->val);
        dfs(p->right);
    }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        dfs(root);
        vv.reserve(v.size());
        for (auto &i: queries){
            int j = lower_bound(v.begin(),v.end(), i) - v.begin();
            int x = j < v.size() ? v[j] : -1;
            if (j == v.size() || v[j] != i) {
                j--;
            }
            int y = j >= 0 ? v[j] : -1;
            vv.push_back({y, x});
        }
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){

    return 0;
}