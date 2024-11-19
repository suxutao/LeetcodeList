#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    vector<int>v;
    unordered_map<TreeNode*,int>m;
    bool dfs(TreeNode*p,int pos){
        bool f= false;
        if (p->val==v[pos]&&m[p]>=v.size()-pos){
            if (pos==v.size()-1)
                return true;
            if (p->left)
                f|=dfs(p->left,pos+1,1);
            if (p->right)
                f|=dfs(p->right,pos+1,1);
            if (f) return true;
        }
        if (m[p]>=v.size()){
            if (p->left)
                f|=dfs(p->left,0);
            if (p->right)
                f|=dfs(p->right,0);
        }
        return f;
    }
    bool dfs(TreeNode*p,int pos,bool){
        bool f= false;
        if (p->val==v[pos]&&m[p]>=v.size()-pos){
            if (pos==v.size()-1)
                return true;
            if (p->left)
                f|=dfs(p->left,pos+1,1);
            if (p->right)
                f|=dfs(p->right,pos+1,1);
        }
        return f;
    }
    int dfs(TreeNode*p){
        if (!p) return 0;
        if (!p->left&&!p->right) return m[p]=1;
        return m[p]=max(dfs(p->left), dfs(p->right))+1;
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        while (head){
            v.push_back(head->val);
            head=head->next;
        }
        dfs(root);
        return dfs(root,0);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}