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
        if (p== nullptr)
            return;
        v.push_back(p->val);
        dfs(p->left);
        dfs(p->right);
    }
    void flatten(TreeNode* root) {
        if (root== nullptr)
            return;
        dfs(root);
        TreeNode*p=root;
        for (int i = 0; i < v.size(); ++i) {
            p->val=v[i];
            p->left= nullptr;
            if (i!=v.size()-1){
                p->right=new TreeNode();
                p=p->right;
            }
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}