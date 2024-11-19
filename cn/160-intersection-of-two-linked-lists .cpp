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
        unordered_map<ListNode*,int>u;
        while (headA){
            u[headA]++;
            headA=headA->next;
        }
        while (headB){
            if (u[headB])
                return headB;
            headB=headB->next;
        }
        return NULL;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}