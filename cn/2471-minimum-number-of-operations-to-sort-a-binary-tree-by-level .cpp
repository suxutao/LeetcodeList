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
    int f(vector<int>&a){
        unordered_map<int,int>m;
        vector<int>b(a);
        int ans=0;
        sort(b.begin(), b.end());
        for (int i = 0; i < a.size(); ++i) {
            m[a[i]]=i;
        }
        for (int i = 0; i < a.size(); ++i) {
            if (a[i]!=b[i]){
                m[a[i]]=m[b[i]];
                a[m[b[i]]]=a[i];
                ++ans;
            }
        }
        return ans;
    }
    int minimumOperations(TreeNode* root) {
        int ans=0;
        queue<TreeNode*>q;
        q.push(root);
        while (!q.empty()){
            int sz=q.size();
            vector<int>v(sz);
            for (int i = 0; i < sz; ++i) {
                TreeNode*p=q.front();
                q.pop();
                v[i]=p->val;
                if (p->left)
                    q.push(p->left);
                if (p->right)
                    q.push(p->right);
            }
            ans+=f(v);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}