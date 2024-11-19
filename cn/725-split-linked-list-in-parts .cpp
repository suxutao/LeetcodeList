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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int cnt=0;
        ListNode*p=head,*t,*q=head;
        while (p){
            cnt++;p=p->next;
        }
        int fen=cnt/k,duo=cnt%k;
        vector<ListNode*>ans(k);
        for (int i = 0; i < duo; ++i) {
            p=new ListNode(0);t=p;
            for (int j = 0; j < fen + 1; ++j) {
                t->next=new ListNode(q->val);
                t=t->next;q=q->next;
            }
            ans[i]=p->next;
        }
        for (int i = duo; i < k; ++i) {
            p=new ListNode(0);t=p;
            for (int j = 0; j < fen; ++j) {
                t->next=new ListNode(q->val);
                t=t->next;q=q->next;
            }
            ans[i]=p->next;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}