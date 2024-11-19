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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if (inorder.size()==0)
            return nullptr;
        TreeNode*p=new TreeNode(postorder[inorder.size()-1]);
        int InPost;
        if (inorder.size()==1)
            return p;
        for (int i = 0; i < inorder.size(); ++i) {
            if (inorder[i]==postorder[postorder.size()-1]){
                InPost=i;
                break;
            }
        }
        vector<int>v1(inorder.begin(),inorder.begin()+InPost);
        vector<int>v2(postorder.begin(),postorder.begin()+InPost);
        vector<int>v3(inorder.begin()+InPost+1,inorder.end());
        vector<int>v4(postorder.begin()+InPost,postorder.end()-1);
        p->left= buildTree(v1,v2);
        p->right= buildTree(v3,v4);
        return p;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}