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
    TreeNode* dfs(vector<int>&v,int l,int r){
        if (r<l)
            return nullptr;
        TreeNode*p=new TreeNode(v[l]);
        if (r==l)
            return p;
        int pos=l;bool da= false,xiao=false;
        for (int i = l+1; i <= r; ++i) {
            if (v[i]<v[pos]){
                xiao= true;
                break;
            }
        }
        for (int i = l+1; i <= r; ++i) {
            if (v[i]>v[pos]){
                pos=i;da= true;
                break;
            }
        }
        if (da&&xiao) {
            p->left = dfs(v, l+1, pos-1);
            p->right = dfs(v, pos, r);
        }else if (da){
            p->right = dfs(v, l+1, r);
        }else{
            p->left = dfs(v, l+1, r);
        }
        return p;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode*p= dfs(preorder,0,preorder.size()-1);
        return p;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}