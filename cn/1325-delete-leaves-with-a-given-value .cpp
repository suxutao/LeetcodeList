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
    int target;
    void dfs(TreeNode*fa,TreeNode*p,bool zuo){
        if (!p) return;
        dfs(p,p->left, true);
        dfs(p,p->right, false);
        if (!p->left&&!p->right){
            if (p->val!=target)
                return;
            if (zuo)
                fa->left= nullptr;
            else
                fa->right= nullptr;
            return;
        }
    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if (!root->left&&!root->right&&root->val==target)
            return nullptr;
        Solution::target=target;
        dfs(root,root->left, true);
        dfs(root,root->right, false);
        if (!root->left&&!root->right&&root->val==target)
            return nullptr;
        return root;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}