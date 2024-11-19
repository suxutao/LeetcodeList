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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (root== nullptr)
            return {};
        deque<TreeNode*>q;
        vector<vector<int>>vv;
        vector<int>v;
        int a=1;
        q.push_back(root);
        while(!q.empty()){
            int s=q.size();
            v.clear();
            if (a&1){
                for (int i = 0; i < s; ++i) {
                    TreeNode*p=q.front();
                    v.push_back(p->val);
                    if (p->left)
                        q.push_back(p->left);
                    if (p->right)
                        q.push_back(p->right);
                    q.pop_front();
                }
                vv.push_back(v);
                a=0;
            }else{
                for (int i = 0; i < s; ++i) {
                    TreeNode*p=q.back();
                    v.push_back(p->val);
                    if (p->right)
                        q.push_front(p->right);
                    if (p->left)
                        q.push_front(p->left);
                    q.pop_back();
                }
                vv.push_back(v);
                a=1;
            }
        }
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}