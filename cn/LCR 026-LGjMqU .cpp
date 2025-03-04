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
    ListNode* reverseList(ListNode*h){
        ListNode*pre= nullptr,*cur=h;
        while (cur){
            ListNode*temp=cur->next;
            cur->next=pre;
            pre=cur;
            cur=temp;
        }
        return pre;
    }

    void mergeList(ListNode*h1,ListNode*h2){
        ListNode*p1,*p2;
        while (h1&&h2){
            p1=h1->next;
            p2=h2->next;
            h1->next=h2;
            h1=p1;
            h2->next=p1;
            h2=p2;
        }
    }

    void reorderList(ListNode* head) {
        ListNode*slow=head,*fast=head;
        while (fast->next&&fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*p=slow->next;
        slow->next= nullptr;
        p= reverseList(p);
        mergeList(head,p);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}