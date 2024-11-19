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
    ListNode* removeElements(ListNode* head, int val) {
        if (head==nullptr)
            return nullptr;
        ListNode*P=new ListNode(0),*p=P;
        while(head){
            if (head->val!=val){
                p->next=head;
                p=p->next;
            }
            head=head->next;
        }
        p->next= nullptr;
        return P->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}