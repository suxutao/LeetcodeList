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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode*p=list1,*p2=list2,*p3=list1;
        for (int i = 0; i < a-1; ++i) {
            p=p->next;
        }
        for (int i = 0; i < b+1; ++i) {
            p3=p3->next;
        }
        while (p2->next){
            p2=p2->next;
        }
        p->next=list2;
        p2->next=p3;
        return list1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}