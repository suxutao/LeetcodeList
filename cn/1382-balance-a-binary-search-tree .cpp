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
    vector<int>s;
    void dfs(TreeNode*p){
        if (!p)return;
        dfs(p->left);
        s.push_back(p->val);
        dfs(p->right);
    }
    TreeNode* build(int l,int r){
        if (l>r) return nullptr;
        if (l==r) return new TreeNode(s[l]);
        int mid=(l+r)>>1;
        TreeNode*p=new TreeNode(s[mid]);
        p->left= build(l,mid-1);
        p->right= build(mid+1,r);
        return p;
    }
    TreeNode* balanceBST(TreeNode* root) {
        dfs(root);
        return build(0,s.size()-1);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}