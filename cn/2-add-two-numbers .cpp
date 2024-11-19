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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int a=l1->val+l2->val;
        int gewei=a%10,jinwei=a/10;
        ListNode*ans=new ListNode(gewei),*p=ans;
        while(l1->next&&l2->next){
            l1=l1->next;l2=l2->next;
            a=l1->val+l2->val+jinwei;
            gewei=a%10,jinwei=a/10;
            p->next=new ListNode(gewei);
            p=p->next;
        }
        while(l1->next){
            l1=l1->next;
            a=l1->val+jinwei;
            gewei=a%10,jinwei=a/10;
            p->next=new ListNode(gewei);
            p=p->next;
        }
        while(l2->next){
            l2=l2->next;a=l2->val+jinwei;
            gewei=a%10,jinwei=a/10;
            p->next=new ListNode(gewei);
            p=p->next;
        }
        if (jinwei){
            p->next=new ListNode(1);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}