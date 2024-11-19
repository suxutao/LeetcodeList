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
    int n;
    vector<TreeNode*> dfs(int n){
        if (n==1)
            return {new TreeNode};
        vector<TreeNode*>vl,vr,v;
        for (int i = 1; i < n; i+=2) {
            vl= dfs(i);
            vr= dfs(n-i-1);
            for (int j = 0; j < vl.size(); ++j) {
                for (int k = 0; k < vr.size(); ++k) {
                    TreeNode*p=new TreeNode();
                    p->left=vl[j];p->right=vr[k];
                    v.push_back(p);
                }
            }
        }
        return v;
    }
    vector<TreeNode*> allPossibleFBT(int n) {
        if ((n&1)==0)
            return {};
        if (n==1)
            return {new TreeNode};
        Solution::n=n;
        return dfs(n);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}