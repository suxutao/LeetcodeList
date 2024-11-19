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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head== nullptr)
            return nullptr;
        ListNode*p=new ListNode(head->val),*p2=p;
        while (head){
            while (head->next&&head->val==p2->val)
                head=head->next;
            if (head->val!=p2->val)
                p2->next=new ListNode(head->val);
            p2=p2->next;
            head=head->next;
        }
        return p;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}