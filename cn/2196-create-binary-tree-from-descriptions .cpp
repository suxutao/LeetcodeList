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
    unordered_map<int,TreeNode*>m;
    unordered_map<int,bool>fa;
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        TreeNode*root;
        for (auto &item: descriptions){
            fa[item[1]]=1;
            if (!m[item[0]]){
                m[item[0]]=new TreeNode(item[0]);
            }
            if (!m[item[1]]){
                m[item[1]]=new TreeNode(item[1]);
            }
            if (item[2]){
                m[item[0]]->left=m[item[1]];
            }else{
                m[item[0]]->right=m[item[1]];
            }
        }
        for (auto &item: descriptions){
            if (!fa[item[0]]){
                root=m[item[0]];
                break;
            }
        }
        return root;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}