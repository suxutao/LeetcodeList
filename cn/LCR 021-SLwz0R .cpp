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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head->next)
            return nullptr;
        ListNode*p=head,*p2;
        int cnt=-n;
        while (p){
            cnt++;
            p=p->next;
        }
        if (cnt==0)
            return head->next;
        p=head;
        for (int i = 0; i < cnt-1; ++i) {
            p=p->next;
        }
        p2=p->next;
        p->next=p2->next;
        return head;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}