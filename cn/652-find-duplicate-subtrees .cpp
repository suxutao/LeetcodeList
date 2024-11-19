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
    unordered_map<string,int>m;
    vector<TreeNode*>v;
    string dfs(TreeNode*p){
        if (!p) return "";
        if (!p->left&&!p->right){
            string s=to_string(p->val);
            m[s]++;
            if (m[s]==2)
                v.push_back(p);
            return s;
        }
        string l= dfs(p->left),r= dfs(p->right);
        string ans=to_string(p->val)+"("+l+")("+r+")";
        m[ans]++;
        if (m[ans]==2)
            v.push_back(p);
        return ans;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        dfs(root);
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}