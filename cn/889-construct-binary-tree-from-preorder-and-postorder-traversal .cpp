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
    TreeNode* dfs(basic_string_view<int>q,basic_string_view<int>h){
        if (q.size()==0)
            return nullptr;
        if (q.size()==1)
            return new TreeNode(q[0]);
        TreeNode*p=new TreeNode(q[0]);
        int pos=h.find(q[1]);
        p->left= dfs(q.substr(1,pos+1),h.substr(0,pos));
        p->right= dfs(q.substr(pos+2,q.size()-pos-2),h.substr(pos+1,q.size()-pos-2));
        return p;
    }
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        basic_string_view<int>qian(preorder.begin(),preorder.end());
        basic_string_view<int>hou(postorder.begin(),postorder.end());
        return dfs(qian,hou);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}