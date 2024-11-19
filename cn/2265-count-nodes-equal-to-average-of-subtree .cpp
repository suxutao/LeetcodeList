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
using pii = pair<int, int>;
pii operator+(const pii&a,const pii&b){
    return {a.first+b.first,a.second+b.second};
}
class Solution {
public:
    int ans=0;
    pii dfs(TreeNode*p){
        if (!p)
            return {0,0};
        if (!p->left&&!p->right){
            ans++;
            return {p->val,1};
        }
        pii temp={0,0};
        temp=temp+ dfs(p->left);
        temp=temp+ dfs(p->right);
        if (p->val==(p->val+temp.first)/(temp.second+1))
            ans++;
        return temp+(pii){p->val,1};
    }
    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}