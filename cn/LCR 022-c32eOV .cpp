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
    ListNode *detectCycle(ListNode *head) {
        ListNode*fast=head,*slow=head;
        do{
            if (fast==nullptr)
                return nullptr;
            fast=fast->next;
            if (fast==nullptr)
                return nullptr;
            fast=fast->next;
            slow=slow->next;
        }while (fast!=slow);
        while (head!=slow){
            head=head->next;
            slow=slow->next;
        }
        return head;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}