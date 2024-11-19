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
    vector<vector<int>>vv;
    vector<int>v;
    deque<TreeNode*>q;
    void dfs(){
        if (q.empty()){
            vv.push_back(v);
            return;
        }
        int sz=q.size();
        for (int i = 0; i < sz; ++i) {
            TreeNode*p=q.front();
            q.pop_front();
            v.push_back(p->val);
            if (p->left)
                q.push_back(p->left);
            if (p->right)
                q.push_back(p->right);
            dfs();
            if (p->left)
                q.pop_back();
            if (p->right)
                q.pop_back();
            q.push_back(p);
            v.pop_back();
        }
    }
    vector<vector<int>> BSTSequences(TreeNode* root) {
        if (!root)
            return {{}};
        q.push_back(root);
        dfs();
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}