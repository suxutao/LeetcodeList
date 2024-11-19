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
    ListNode* swapPairs(ListNode* head) {
        if (head== nullptr)
            return nullptr;
        else if (head->next== nullptr)
            return head;
        else{
            ListNode*cur=head->next,*pre,*temp1=head,*temp2,*Head=new ListNode(-1);
            Head->next=cur;
            if (cur->next== nullptr){
                cur->next=temp1;
                temp1->next= nullptr;
                return cur;
            }
            while (cur->next!= nullptr){
                pre=temp1;
                temp1=cur->next;
                temp2=cur->next->next;
                cur->next=pre;
                if (temp2== nullptr){
                    pre->next=temp1;
                    return Head->next;
                }
                pre->next=temp2;
                cur=temp2;
                if (cur->next== nullptr){
                    cur->next=temp1;
                    temp1->next= nullptr;
                    break;
                }
            }
            return Head->next;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}