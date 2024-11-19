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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head->next== nullptr)
            return nullptr;
        ListNode*kuai=head,*man=head,*temp;
        for (int i = 0; i < n; ++i) {
            kuai=kuai->next;
        }
        if (kuai== nullptr)
            return head->next;
        while (kuai->next!= nullptr){
            kuai=kuai->next;
            man=man->next;
            temp=man;
        }
        man=man->next;
        temp->next=man->next;
        return head;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}