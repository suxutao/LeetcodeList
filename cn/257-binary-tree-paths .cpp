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
    void dfs(TreeNode*p,vector<string>&v,string path){
        if (!p)
            return;
        if (!p->left&&!p->right){
            path=path+"->"+ to_string(p->val);
            v.push_back(path);
            return;
        }
        dfs(p->left,v,path+"->"+to_string(p->val));
        dfs(p->right,v,path+"->"+to_string(p->val));
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if (root->left== nullptr&&root->right== nullptr)
            return {to_string(root->val)};
        vector<string>v;
        dfs(root->left,v,to_string(root->val));
        dfs(root->right,v,to_string(root->val));
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}