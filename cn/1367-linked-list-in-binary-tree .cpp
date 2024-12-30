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
    bool dfs(ListNode*l,TreeNode*p){
        if (!l)
            return true;
        if (!p)
            return false;
        if (l->val!=p->val)
            return false;
        return dfs(l->next,p->left)||dfs(l->next,p->right);
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        if (!root)
            return false;
        return dfs(head,root)|| isSubPath(head,root->left)|| isSubPath(head,root->right);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}