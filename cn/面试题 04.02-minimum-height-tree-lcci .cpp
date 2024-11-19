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
    TreeNode* dfs(basic_string<int>v){
        if (v.size()==0)
            return nullptr;
        else if (v.size()==1)
            return new TreeNode(v[0]);
        TreeNode*p=new TreeNode(v[v.size()/2]);
        p->left= dfs(v.substr(0,v.size()/2));
        p->right= dfs(v.substr(v.size()/2+1,v.size()-v.size()/2-1));
        return p;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        basic_string<int>v(nums.begin(),nums.end());
        return dfs(v);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}