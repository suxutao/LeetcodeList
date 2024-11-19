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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>q;vector<double>v;
        q.push(root);
        while (!q.empty()){
            int sz=q.size();
            double sum=0;
            for (int i = 0; i < sz; ++i) {
                TreeNode*p=q.front();
                q.pop();
                sum+=p->val;
                if (p->left) q.push(p->left);
                if (p->right)q.push(p->right);
            }
            v.push_back(sum/sz);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}