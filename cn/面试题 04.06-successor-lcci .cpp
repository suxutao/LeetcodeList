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
    vector<TreeNode*>v;
    void dfs(TreeNode*p){
        if (!p)
            return;
        dfs(p->left);
        v.push_back(p);
        dfs(p->right);
    }
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        int val=p->val;
        dfs(root);
        for (int i = 0; i < v.size()-1; ++i) {
            if (v[i]->val==val){
                return v[i+1];
            }
        }
        return nullptr;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}