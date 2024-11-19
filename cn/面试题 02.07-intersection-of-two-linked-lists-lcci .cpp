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
        if (headB==NULL||headA==NULL)
            return NULL;
        unordered_map<ListNode*,int>u;
        ListNode*a=headA,*b=headB;
        while(a!=NULL){
            u[a]=a->val;
            a=a->next;
        }
        while(b!=NULL){
            if (u.find(b)!=u.end())
                return b;
            else
                b=b->next;
        }
        return NULL;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}