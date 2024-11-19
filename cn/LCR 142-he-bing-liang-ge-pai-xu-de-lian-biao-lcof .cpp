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
    ListNode* trainningPlan(ListNode* l1, ListNode* l2) {
        ListNode*h=new ListNode(),*p=h;
        while (l1&&l2){
            if (l1->val<=l2->val){
                p->next=l1;
                l1=l1->next;
            }else{
                p->next=l2;
                l2=l2->next;
            }
            p=p->next;
        }
        p->next=l1?l1:l2;
        return h->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}