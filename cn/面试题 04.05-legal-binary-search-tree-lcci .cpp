#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
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
    bool isValidBST(TreeNode* root) {
        dfs(root);
        for (int i = 1; i < v.size(); ++i) {
            if (v[i]<=v[i-1])
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}