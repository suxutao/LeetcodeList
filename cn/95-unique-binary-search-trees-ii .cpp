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
    vector<TreeNode*> hui(int l,int r){
        if (l>r)
            return {};
        if (l==r)
            return {new TreeNode(l)};
        vector<TreeNode*>ans;
        for (int i = l; i <= r; ++i) {
            auto L= hui(l,i-1);
            auto R= hui(i+1,r);
            if (L.empty())
                L.push_back(nullptr);
            if (R.empty())
                R.push_back(nullptr);
            for (auto & j : L) {
                for (auto & k : R) {
                    TreeNode*p=new TreeNode(i);
                    p->left=j;
                    p->right=k;
                    ans.push_back(p);
                }
            }
        }
        return ans;
    }
    vector<TreeNode*> generateTrees(int n) {
        return hui(1,n);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){

    return 0;
}