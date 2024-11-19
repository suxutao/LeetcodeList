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
    using ll = long long;
    vector<ll>v;
    queue<TreeNode*>q;
    long long kthLargestLevelSum(TreeNode* root, int k) {
        q.push(root);
        while (!q.empty()){
            ll sz=q.size(),temp=0;
            for (int i = 0; i < sz; ++i) {
                TreeNode*p=q.front();
                q.pop();
                temp+=p->val;
                if (p->left)
                    q.push(p->left);
                if (p->right)
                    q.push(p->right);
            }
            v.push_back(temp);
        }
        if (v.size()<k)
            return -1;
        else{
            nth_element(v.begin(),v.begin()+k-1,v.end(),greater<>());
            return v[k-1];
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}