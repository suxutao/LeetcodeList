#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
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
    ListNode*add(ListNode* l1, ListNode* l2,int a){
        if (!l1&&!l2&&a)
            return new ListNode(1);
        if (!l1&&!l2)
            return NULL;
        int b=(l1?l1->val:0)+(l2?l2->val:0)+a;
        ListNode*p=new ListNode(0);
        if (b>9){
            p->val=b-10;
            a=1;
        }else{
            p->val=b;
            a=0;
        }
        p->next= add(l1?l1->next:NULL,l2?l2->next:NULL,a);
        return p;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*p= add(l1,l2,0);
        return p;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}