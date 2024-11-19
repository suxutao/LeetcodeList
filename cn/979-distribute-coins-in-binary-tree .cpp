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
    pair<int,int> dfs(TreeNode*p,int&res){
        if (p== nullptr)
            return {};
        pair<int,int>pair1= dfs(p->left,res);
        pair<int,int>pair2= dfs(p->right,res);
        int node=pair1.first+pair2.first+1;
        int coin=pair1.second+pair2.second+p->val;
        res+= abs(node-coin);
        return {node,coin};
    }
    int distributeCoins(TreeNode* root) {
        int res=0;
        dfs(root,res);
        return res;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}