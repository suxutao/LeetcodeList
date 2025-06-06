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
    vector<vector<int>> decorateRecord(TreeNode* root) {
        if (!root)
            return {};
        int cnt=0;
        vector<vector<int>>vv;
        queue<TreeNode*>q;
        q.push(root);
        while (!q.empty()){
            int sz=q.size();
            vector<int>v;
            for (int i = 0; i < sz; ++i) {
                auto f=q.front();
                q.pop();
                v.push_back(f->val);
                if (f->left)
                    q.push(f->left);
                if (f->right)
                    q.push(f->right);
            }
            if (cnt&1)
                ranges::reverse(v);
            vv.push_back(v);
            ++cnt;
        }
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}