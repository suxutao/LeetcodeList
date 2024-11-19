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
    vector<TreeNode*>v2;
    void dfs(TreeNode*p){
        if (p== nullptr)
            return;
        dfs(p->left);
        v.push_back(p->val);
        v2.push_back(p);
        dfs(p->right);
    }
    void dfs2(TreeNode*p,TreeNode*l,TreeNode*r,int left,int right){
        if (p== nullptr)
            return;
        dfs2(p->left,l,r,left,right);
        if (p==l)
            p->val=right;
        else if (p==r)
            p->val=left;
        dfs2(p->right,l,r,left,right);
    }
    void recoverTree(TreeNode* root) {
        dfs(root);
        int l,r;
        for (int i = 0; i < v.size()-1; ++i) {
            if (v[i]>v[i+1]){
                l=i;
                break;
            }
        }
        for (int i = v.size()-1; i > 0; --i) {
            if (v[i]<v[i-1]){
                r=i;
                break;
            }
        }
        dfs2(root,v2[l],v2[r],v[l],v[r]);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}