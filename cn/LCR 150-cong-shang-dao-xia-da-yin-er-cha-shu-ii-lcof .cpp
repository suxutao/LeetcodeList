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
        if (!root) return {};
        queue<TreeNode*>q;
        vector<vector<int>>v;
        q.push(root);
        while (!q.empty()){
            int sz=q.size();
            v.push_back({});
            for (int i = 0; i < sz; ++i) {
                TreeNode*p=q.front();
                q.pop();
                v.back().push_back(p->val);
                if (p->left)
                    q.push(p->left);
                if (p->right)
                    q.push(p->right);
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}