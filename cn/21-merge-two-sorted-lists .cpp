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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1== nullptr)
            return list2;
        if (list2== nullptr)
            return list1;
        ListNode*p1=list1,*p2=list2,*head=new ListNode(-1),*temp;
        if (p1->val<p2->val){
            head->next=p1;
            p1=p1->next;
        }else{
            head->next=p2;
            p2=p2->next;
        }
        temp=head->next;
        while(p1!= nullptr&&p2!= nullptr){
            if (p1->val<p2->val){
                temp->next=p1;
                temp=p1;
                p1=p1->next;
            }else{
                temp->next=p2;
                temp=p2;
                p2=p2->next;
            }
        }
        if (p1== nullptr)
            temp->next=p2;
        if (p2== nullptr)
            temp->next=p1;
        return head->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}