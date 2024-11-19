#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<ListNode*>v;
    queue<TreeNode*>q;
    vector<ListNode*> listOfDepth(TreeNode* tree) {
        if (!tree)
            return {};
        q.push(tree);
        while (!q.empty()){
            int s=q.size();
            ListNode*lp=new ListNode(-1),*head=lp;
            for (int i = 0; i < s; ++i) {
                TreeNode*p=q.front();
                q.pop();
                if (p->left)
                    q.push(p->left);
                if (p->right)
                    q.push(p->right);
                lp->next=new ListNode(p->val);
                lp=lp->next;
            }
            v.push_back(head->next);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}