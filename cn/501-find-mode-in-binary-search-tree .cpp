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
    unordered_map<int,int>u;
    void order(TreeNode*p){
        if (p== nullptr)
            return;
        order(p->left);
        u[p->val]++;
        order(p->right);
    }
    vector<int> findMode(TreeNode* root) {
        int MAX=INT_MIN;
        vector<int>v;
        order(root);
        for(auto & i : u){
            if (i.second>MAX){
                v.clear();
                v.push_back(i.first);
                MAX=i.second;
            }else if (i.second==MAX){
                v.push_back(i.first);
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().findMode(stringToTreeNode("[1,null,2,2]"));
    return 0;
}