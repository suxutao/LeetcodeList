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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if (preorder.size()==0)
            return nullptr;
        TreeNode*p=new TreeNode(preorder[0]);
        int PreIn;
        if (preorder.size()==1)
            return p;
        for (int i = 0; i < preorder.size(); ++i) {
            if (inorder[i]==preorder[0]){
                PreIn=i;
                break;
            }
        }
        vector<int>v1(preorder.begin()+1,preorder.begin()+PreIn+1);
        vector<int>v2(inorder.begin(),inorder.begin()+PreIn);
        vector<int>v3(preorder.begin()+PreIn+1,preorder.end());
        vector<int>v4(inorder.begin()+PreIn+1,inorder.end());
        p->left= buildTree(v1,v2);
        p->right= buildTree(v3,v4);
        return p;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){

    return 0;
}