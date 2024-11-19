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
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<>>q;
        ListNode*head=new ListNode,*p=head;
        int n=lists.size();
        for (int i = 0; i < n; ++i) {
            if (lists[i]){
                q.push(lists[i]->val<<16|i);
                lists[i]=lists[i]->next;
            }
        }
        while (!q.empty()){
            p->next=new ListNode(q.top()>>16);
            p=p->next;
            int pos=q.top()<<16>>16;
            q.pop();
            if (lists[pos]){
                q.push(lists[pos]->val<<16|pos);
                lists[pos]=lists[pos]->next;
            }
        }
        return head->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}