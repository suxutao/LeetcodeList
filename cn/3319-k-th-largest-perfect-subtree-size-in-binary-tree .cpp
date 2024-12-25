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
    int dfs(TreeNode*p){
        if (!p)
            return 0;
        if (!p->left&&!p->right){
            v.push_back(1);
            return 1;
        }
        if (p->left&&p->right){
            int l= dfs(p->left);
            int r= dfs(p->right);
            if (l==r&&~r){
                v.push_back(l+r+1);
                return l+r+1;
            }else{
                return -1;
            }
        }else{
            dfs(p->left);
            dfs(p->right);
            return -1;
        }
    }
    int kthLargestPerfectSubtree(TreeNode* root, int k) {
        dfs(root);
        sort(v.begin(), v.end(),greater<>());
        return v.size()<k?-1:v[k-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}