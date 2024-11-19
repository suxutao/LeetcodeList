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
    int ans=0,distance;
    vector<int> dfs(TreeNode*p){
        if (!p) return {};
        if (!p->left&&!p->right) return {0};
        vector<int>v;
        vector<int>left= dfs(p->left);
        for (auto &item: left){
            if (++item>distance)
                continue;
            v.push_back(item);
        }
        vector<int>right= dfs(p->right);
        for (auto &item: right){
            if (++item>distance)
                continue;
            v.push_back(item);
        }
        for (auto &i: left){
            for (auto &j: right){
                ans+=(i+j)<=distance;
            }
        }
        return v;
    }
    int countPairs(TreeNode* root, int distance) {
        Solution::distance=distance;
        dfs(root);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}