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
    int ans;
    int dfs(TreeNode*p){
        if (p== nullptr)
            return 2;
        int l= dfs(p->left);
        int r= dfs(p->right);
        if (l==2&&r==2)
            return 0;
        if (l==0||r==0){
            ans++;
            return 1;
        }
        if (l==1||r==1)
            return 2;
        return -1;
    }
    int minCameraCover(TreeNode* root) {
        ans=0;
        if (!dfs(root))
            ans++;
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}