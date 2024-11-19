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
    ListNode* partition(ListNode* head, int x) {
        if (!head||!head->next)
            return head;
        ListNode*h1=new ListNode(0),*h2=new ListNode(0),*p1=h1,*p2=h2;
        while (head){
            if (head->val<x){
                p1->next=new ListNode(head->val);
                p1=p1->next;
            }else{
                p2->next=new ListNode(head->val);
                p2=p2->next;
            }
            head=head->next;
        }
        p1->next=h2->next;
        p2->next= nullptr;
        return h1->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}