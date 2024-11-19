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
    queue<TreeNode*>q;
    vector<int> rightSideView(TreeNode* root) {
        if (!root) return {};
        vector<int>ans;
        q.push(root);
        while (!q.empty()){
            int s=q.size(),temp;
            for (int i = 0; i < s; ++i) {
                TreeNode*p=q.front();
                q.pop();
                if (p->left)
                    q.push(p->left);
                if (p->right)
                    q.push(p->right);
                temp=p->val;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}