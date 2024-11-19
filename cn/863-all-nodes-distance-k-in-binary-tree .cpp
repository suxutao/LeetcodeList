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
    unordered_map<TreeNode*,TreeNode*>m;
    unordered_set<TreeNode*>s;
    void dfs(TreeNode*u,TreeNode*fa){
        if (!u) return;
        m[u]=fa;
        dfs(u->left,u);
        dfs(u->right,u);
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        dfs(root, nullptr);
        queue<TreeNode*>q;
        vector<int>v;
        q.push(target);
        s.insert(target);
        for (int i = 0; i <= k; ++i) {
            if (q.empty())
                return {};
            int sz=q.size();
            for (int j = 0; j < sz; ++j) {
                TreeNode*p=q.front();q.pop();
                if (p->left&&!s.contains(p->left)) {
                    q.push(p->left);
                    s.insert(p->left);
                }
                if (p->right&&!s.contains(p->right)) {
                    q.push(p->right);
                    s.insert(p->right);
                }
                if (m[p]&&!s.contains(m[p])) {
                    q.push(m[p]);
                    s.insert(m[p]);
                }
                if (i==k)
                    v.push_back(p->val);
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    TreeNode*p=stringToTreeNode("[3,5,1,6,2,0,8,null,null,7,4]");
    Solution().distanceK(p,p->left,2);
    return 0;
}