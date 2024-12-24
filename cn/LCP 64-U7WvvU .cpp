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
    unordered_map<TreeNode*,array<int,4>>m;
    int dfs(TreeNode*p,bool kg2,bool kg3){
        if (!p)
            return 0;
        if (!m.contains(p))
            m[p].fill(-1);
        int kg=0;
        if (kg2) kg+=2;
        if (kg3) kg++;
        if (~m[p][kg])
            return m[p][kg];
        if (p->val==(kg2==kg3)){
            vector<int>v(4);
            v[0]+=1+dfs(p->left,0,kg3)+dfs(p->right,0,kg3);
            v[1]+=1+dfs(p->left,0,!kg3)+dfs(p->right,0,!kg3);
            v[2]+=1+dfs(p->left,1,kg3)+dfs(p->right,1,kg3);
            v[3]=3+dfs(p->left,1,!kg3)+dfs(p->right,1,!kg3);
            return m[p][kg]=min(min(v[0],v[3]), min(v[1],v[2]));
        }else{
            int ans=dfs(p->left,0,kg3)+dfs(p->right,0,kg3);
            ans=min(ans,2+dfs(p->right,0,!kg3)+dfs(p->left,0,!kg3));
            ans=min(ans,2+dfs(p->right,1,!kg3)+dfs(p->left,1,!kg3));
            ans=min(ans,2+dfs(p->right,1,kg3)+dfs(p->left,1,kg3));
            return m[p][kg]=ans;
        }
    }
    int closeLampInTree(TreeNode* root) {
        return dfs(root,0,0);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}