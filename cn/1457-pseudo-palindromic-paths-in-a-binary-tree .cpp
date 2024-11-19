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
    int arr[11]{},ans=0;
    bool check(){
        int ji=0;
        for (int i = 1; i < 10; ++i) {
            ji+=arr[i]&1;
            if (ji>1)
                return false;
        }
        return true;
    }
    void dfs(TreeNode*p){
        if (!p) return;
        if (!p->left&&!p->right){
            arr[p->val]++;
            ans+=check();
            arr[p->val]--;
            return;
        }
        arr[p->val]++;
        dfs(p->left);
        dfs(p->right);
        arr[p->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        dfs(root);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}