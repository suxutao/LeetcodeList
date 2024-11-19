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
        if (!p) return;
        dfs(p->left);
        v.push_back(p->val);
        dfs(p->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        dfs(root);
        TreeNode*head=new TreeNode(),*p=head;
        for (int i = 0; i < v.size(); ++i) {
            p->right=new TreeNode(v[i]);
            p=p->right;
        }
        return head->right;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}