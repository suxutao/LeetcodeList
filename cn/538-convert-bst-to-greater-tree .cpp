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
    vector<int>v1;
    vector<int>v2;
    void dfs(TreeNode*p){
        if (!p)
            return;
        dfs(p->left);
        v1.push_back(p->val);
        dfs(p->right);
    }
    void dfss(TreeNode*p,int&a){
        if (!p)
            return;
        dfss(p->left,a);
        p->val=v2[a++];
        dfss(p->right,a);
    }
    TreeNode* convertBST(TreeNode* root) {
        if (!root)
            return nullptr;
        int a=0;
        dfs(root);
        reverse(v1.begin(),v1.end());
        v2.resize(v1.size());
        v2[0]=v1[0];
        for (int i = 1; i < v1.size(); ++i) {
            v2[i]=v2[i-1]+v1[i];
        }
        reverse(v2.begin(),v2.end());
        dfss(root,a);
        return root;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}