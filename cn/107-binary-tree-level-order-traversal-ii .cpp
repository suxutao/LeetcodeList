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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if (root== nullptr)
            return {};
        if (root->left== nullptr&&root->right== nullptr)
            return {{root->val}};
        vector<vector<int>>vv;
        vector<int>v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            v.clear();
            for (int i = 0; i < s; ++i) {
                TreeNode* a=q.front();
                if (a->left)
                    q.push(a->left);
                if (a->right)
                    q.push(a->right);
                v.push_back(a->val);
                q.pop();
            }
            vv.push_back(v);
        }
        reverse(vv.begin(),vv.end());
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}