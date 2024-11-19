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
    int count=0;
    void dfs(TreeNode*p){
        if (p== nullptr)
            return;
        count++;
        dfs(p->left);
        dfs(p->right);
    }
    int countNodes(TreeNode* root) {
        dfs(root);
        return count;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}