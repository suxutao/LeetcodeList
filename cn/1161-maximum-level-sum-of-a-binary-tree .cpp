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
    int maxLevelSum(TreeNode* root) {
        int cen=1,ans=1,MAX=INT_MIN;
        queue<TreeNode*>q;
        q.push(root);
        while (!q.empty()){
            int sz=q.size(),sum=0;
            for (int i = 0; i < sz; ++i) {
                TreeNode*p=q.front();
                q.pop();
                sum+=p->val;
                if (p->left)
                    q.push(p->left);
                if (p->right)
                    q.push(p->right);
            }
            if (sum>MAX){
                MAX=sum;
                ans=cen;
            }
            cen++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}