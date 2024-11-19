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
    TreeNode* dfs(int l,int r){
        if (l>r){
            return nullptr;
        }else if (l==r){
            return new TreeNode(v[l]);
        }
        int mid=(l+r)>>1;
        TreeNode*p=new TreeNode(v[mid]);
        p->left= dfs(l,mid-1);
        p->right= dfs(mid+1,r);
        return p;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        while (head){
            v.push_back(head->val);
            head=head->next;
        }
        return dfs(0,v.size()-1);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}