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
    unordered_set<int>s;
    ListNode* removeDuplicateNodes(ListNode* head) {
        if (!head||!head->next)
            return head;
        ListNode*p=head,*p2=head->next;
        s.insert(head->val);
        while (p2){
            if (!s.count(p2->val)){
                s.insert(p2->val);
                p->next=p2;
                p=p->next;
                p2=p2->next;
            }else{
                p2=p2->next;
            }
        }
        p->next= nullptr;
        return head;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}