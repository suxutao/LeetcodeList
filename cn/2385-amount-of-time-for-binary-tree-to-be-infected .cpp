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
    int arr[100005]={};
    map<TreeNode*,TreeNode*>fa;
    map<TreeNode*,bool>vis;
    TreeNode* qi;
    queue<TreeNode*>q;
    void dfs(TreeNode*f,TreeNode*p,int start){
        fa[p]=f;
        if (p->val==start)
            qi=p;
        if (p->left)
            dfs(p,p->left,start);
        if (p->right)
            dfs(p,p->right,start);
    }
    int amountOfTime(TreeNode* root, int start) {
        int a=-1;
        dfs(root,root,start);
        q.push(qi);
        vis[qi]=1;
        while (!q.empty()){
            int s=q.size();
            for (int i = 0; i < s; ++i) {
                TreeNode*p=q.front();
                q.pop();
                if (p->left&&!vis[p->left]){
                    vis[p->left]=1;
                    q.push(p->left);
                }
                if (p->right&&!vis[p->right]){
                    vis[p->right]=1;
                    q.push(p->right);
                }
                if (!vis[fa[p]]){
                    vis[fa[p]]=1;
                    q.push(fa[p]);
                }
            }
            ++a;
        }
        return a;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}