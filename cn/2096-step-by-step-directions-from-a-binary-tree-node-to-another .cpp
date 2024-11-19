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
    string s1,s2,t1,t2;
    void dfs(TreeNode*p,int end,string&s){
        if (p->val==end){
            if (&s==&t1)
                s1=s;
            else
                s2=s;
            return;
        }
        if (p->left){
            s.push_back('L');
            dfs(p->left,end,s);
            s.pop_back();
        }
        if (p->right){
            s.push_back('R');
            dfs(p->right,end,s);
            s.pop_back();
        }
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        dfs(root,startValue,t1);
        dfs(root,destValue,t2);
        int i;
        for (i = 0; i < min(s1.size(), s2.size()); ++i) {
            if (s1[i]!=s2[i])
                break;
        }
        return string(s1.size()-i,'U')+s2.substr(i);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}