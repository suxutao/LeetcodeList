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
    basic_string<int>s;
    void dfs(TreeNode*p){
        if (!p)return;
        dfs(p->left);
        s.push_back(p->val);
        dfs(p->right);
    }
    TreeNode* build(basic_string<int>b){
        int si=b.size();
        if (si==0) return nullptr;
        if (si==1) return new TreeNode(b[0]);
        TreeNode*p=new TreeNode(b[si/2]);
        p->left= build(b.substr(0,si/2));
        p->right= build(b.substr(si/2+1,si-si/2-1));
        return p;
    }
    TreeNode* balanceBST(TreeNode* root) {
        dfs(root);
        return build(s);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}