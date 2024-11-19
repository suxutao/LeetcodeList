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
    ListNode* insertionSortList(ListNode* head) {
        ListNode*p=new ListNode;
        p->next=new ListNode(head->val);
        head=head->next;
        while (head){
            ListNode*t=p->next,*pre=p;
            while (t&&t->val<head->val){
                pre=t;
                t=t->next;
            }
            pre->next=new ListNode(head->val);
            pre->next->next=t;
            head=head->next;
        }
        return p->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().insertionSortList(stringToListNode("[3,4,1]"));
//    ListNode*p=stringToListNode("[3,4,1]");
//    while (p){
//        cout<<p->val<<endl;
//        p=p->next;
//    }
    return 0;
}