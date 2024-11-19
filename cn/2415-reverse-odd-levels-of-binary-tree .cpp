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
    TreeNode* reverseOddLevels(TreeNode* root) {
        deque<TreeNode*>d(1,root);
        deque<int>d2;deque<TreeNode*>d3;
        int a=0;TreeNode*p;
        while (!d.empty()){
            int s=d.size();
            if (!(a&1)){
                d2.clear();
                for (int i = 0; i < s; ++i){
                    p=d.front();
                    if (p->left){
                        d.push_back(p->left);
                        d.push_back(p->right);
                        d2.push_back(p->left->val);
                        d2.push_back(p->right->val);
                    }
                    d3.push_back(p);
                    d.pop_front();
                }
                reverse(d2.begin(), d2.end());
                for (int i = 0; i < s; ++i) {
                    p=d3.front();
                    if (p->left){
                        p->left->val=d2[i*2];
                        p->right->val=d2[i*2+1];
                    }
                    d3.pop_front();
                }
            }else{
                for (int i = 0; i < s; ++i){
                    p=d.front();
                    if (p->left){
                        d.push_back(p->left);
                        d.push_back(p->right);
                    }
                    d.pop_front();
                }
            }
            a++;
        }
        return root;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}