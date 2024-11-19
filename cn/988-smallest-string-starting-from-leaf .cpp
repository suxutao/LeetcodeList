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
    vector<string>v;
    string s;
    void dfs(TreeNode*p){
        if (!p) return;
        if (!p->left&&!p->right){
            s.push_back(p->val+'a');
            v.push_back(s);
            s.pop_back();
            return;
        }
        s.push_back(p->val+'a');
        dfs(p->left);
        dfs(p->right);
        s.pop_back();
    }
    string smallestFromLeaf(TreeNode* root) {
        dfs(root);
        for (auto &i: v){
            reverse(i.begin(), i.end());
        }
        sort(v.begin(), v.end());
        return v[0];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}