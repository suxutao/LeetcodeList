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
    int r;
    void dfs(TreeNode*p){
        if (!p) return;
        if (p->val!=r)
            v.push_back(p->val);
        dfs(p->left);
        dfs(p->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        r=root->val;
        dfs(root);
        sort(v.begin(), v.end());
        return v.empty()?-1:v[0];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}