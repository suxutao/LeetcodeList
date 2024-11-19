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
    vector<int>v;
    void inorder(TreeNode*p){
        if (p== nullptr)
            return;
        inorder(p->left);
        v.push_back(p->val);
        inorder(p->right);
    }
    int getMinimumDifference(TreeNode* root) {
        int MIN=INT_MAX;
        inorder(root);
        for (int i = 1; i < v.size(); ++i) {
            if (v[i]-v[i-1]<MIN)
                MIN=v[i]-v[i-1];
        }
        return MIN;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}