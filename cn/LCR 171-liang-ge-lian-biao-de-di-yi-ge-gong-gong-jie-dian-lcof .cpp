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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n1=0,n2=0;
        ListNode*a=headA,*b=headB;
        while (a){
            ++n1;
            a=a->next;
        }
        while (b){
            ++n2;
            b=b->next;
        }
        a=headA,b=headB;
        if (n1>n2){
            for (int i = 0; i < n1 - n2; ++i) {
                a=a->next;
            }
        }else{
            for (int i = 0; i < n2 - n1; ++i) {
                b=b->next;
            }
        }
        while (a!=b){
            a=a->next;
            b=b->next;
        }
        return a;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}