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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if (nums.size()==0)
            return nullptr;
        int value=INT_MIN,pos;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]>value){
                value=nums[i];
                pos=i;
            }
        }
        TreeNode*p=new TreeNode(value);
        vector<int>v1(nums.begin(),nums.begin()+pos);
        vector<int>v2(nums.begin()+pos+1,nums.end());
        p->left= constructMaximumBinaryTree(v1);
        p->right= constructMaximumBinaryTree(v2);
        return p;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}