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
    vector<int>ans;
    map<int,int>m;
    int dfs(TreeNode*p){
        if (!p)return 0;
        if (!p->left&&!p->right){
            ++m[p->val];
            return p->val;
        }
        int sum=p->val;
        sum+=dfs(p->left);
        sum+=dfs(p->right);
        ++m[sum];
        return sum;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        dfs(root);
        int MAX=0;
        for (map<int,int>::iterator j=m.begin();j!=m.end();++j){
            pair<int,int> i=*j;
            if (i.second>MAX){
                MAX=i.second;
                ans.clear();
                ans.push_back(i.first);
            }else if (i.second==MAX){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    TreeNode*p=new TreeNode(5);
    p->left=new TreeNode(2);
    p->right=new TreeNode(-5);
    Solution().findFrequentTreeSum(p);
    return 0;
}