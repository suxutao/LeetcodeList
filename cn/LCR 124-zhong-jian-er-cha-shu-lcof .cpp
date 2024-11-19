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
    TreeNode*dfs(vector<int>&pre,vector<int>&in,int a,int b,int l){
        if (a>b)
            return nullptr;
        if (a==b)
            return new TreeNode(pre[a]);
        int n=b-a+1,pos;
        for (int i = 0; i <= n; ++i) {
            if (pre[a]==in[l+i]){
                pos=i;
                break;
            }
        }
        TreeNode*p=new TreeNode(pre[a]);
        p->left= dfs(pre,in,a+1,a+pos,l);
        p->right= dfs(pre,in,a+pos+1,b,l+pos+1);
        return p;
    }
    TreeNode* deduceTree(vector<int>& preorder, vector<int>& inorder) {
        if (preorder.empty())
            return nullptr;
        int n=preorder.size();
        return dfs(preorder,inorder,0,n-1,0);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}