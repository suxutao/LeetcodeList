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
    bool dfs(TreeNode* t1, TreeNode* t2,bool lian){
        if (!t2) return t1== nullptr;
        if (!t1) return false;
        if (t1->val==t2->val){
            if (dfs(t1->left,t2->left,1)&& dfs(t1->right,t2->right,1))
                return true;
            else
                return dfs(t1->left,t2,0)|| dfs(t1->right,t2,0);
        }else{
            if (lian) return false;
            return dfs(t1->left,t2,0)|| dfs(t1->right,t2,0);
        }
    }
    bool checkSubTree(TreeNode* t1, TreeNode* t2) {
        return dfs(t1,t2,0);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}