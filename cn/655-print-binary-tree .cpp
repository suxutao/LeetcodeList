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
    vector<vector<string>>v;
    unordered_map<TreeNode*,int>ma;
    queue<TreeNode*>q;
    int dfs(TreeNode*p){
        if (!p)return 0;
        if (!p->left&&!p->right)return 1;
        return max(dfs(p->left), dfs(p->right))+1;
    }
    vector<vector<string>> printTree(TreeNode* root) {
        int m= dfs(root),n=(1<<m)-1;
        v.assign(m,vector<string>(n));
        q.push(root);
        ma[root]=(n-1)>>1;
        while (!q.empty()){
            TreeNode*p=q.front();q.pop();
            int r=ma[p]>>16,c=ma[p]<<16>>16;
            v[r][c]=to_string(p->val);
            if (p->left){
                q.push(p->left);
                ma[p->left]=(r+1)<<16|(c-(1<<(m-2-r)));
            }
            if (p->right){
                q.push(p->right);
                ma[p->right]=(r+1)<<16|(c+(1<<(m-2-r)));
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}