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
    void dfs(TreeNode*p,int&a){
        if (!p)
            return;
        if (!p->left&&!p->right) { return; }
        else if(p->right== nullptr){
            if (!p->left->left&&!p->left->right)
                a+=p->left->val;
            else
                dfs(p->left,a);
        }else if(p->left== nullptr){
            dfs(p->right,a);
        }else{
            if (!p->left->left&&!p->left->right)
                a+=p->left->val;
            dfs(p->left,a);
            dfs(p->right,a);
        }
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int a=0;
        if (!root->left&&!root->right)
            return 0;
        dfs(root,a);
        return a;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}