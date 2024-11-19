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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.size()==0)
            return nullptr;
        if (nums.size()==1)
            return new TreeNode(nums[0]);
        int a=nums.size();
        vector<int>v1(nums.begin(),nums.begin()+a/2);
        vector<int>v2(nums.begin()+a/2+1,nums.end());
        TreeNode*p=new TreeNode(nums[a/2]);
        p->left= sortedArrayToBST(v1);
        p->right= sortedArrayToBST(v2);
        return p;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}