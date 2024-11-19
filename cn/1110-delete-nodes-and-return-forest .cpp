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
    vector<TreeNode*>v;
    bool arr[1005]{};
    void dfs(TreeNode*p,TreeNode*fa){
        if (arr[p->val]){
            if (fa){
                if (fa->left==p)
                    fa->left= nullptr;
                else
                    fa->right= nullptr;
            }
            if (p->left)
                dfs(p->left, nullptr);
            if (p->right)
                dfs(p->right, nullptr);
        }else{
            if (fa== nullptr)
                v.push_back(p);
            if (p->left)
                dfs(p->left,p);
            if (p->right)
                dfs(p->right,p);
        }
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        if (!root) return {root};
        for (auto &i: to_delete){
            arr[i]=1;
        }
        dfs(root, nullptr);
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}