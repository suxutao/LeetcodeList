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
    bool pan(ListNode*p){
        if (p== nullptr)
            return false;
        if (p->next== nullptr)
            return true;
        if (p->next->val!=p->val)
            return true;
        return false;
    }
    ListNode* deleteDuplicates(ListNode* head) {
        if (head== nullptr)
            return nullptr;
        if (head->next== nullptr)
            return head;
        ListNode*p=new ListNode(0);
        ListNode*p1=head,*p2=head->next,*p3=head;
        bool first= true;
        while (p2!= nullptr){
            while (p2&&p1->val==p2->val){
                p2=p2->next;
            }
            if (p2== nullptr) {
                p3->next= nullptr;
                break;
            }
            if (p2==p1->next){
                if (first){
                    first=false;
                    p->next=p1;
                    p3=p1;
                }else{
                    p3->next=p1;
                    p3=p3->next;
                }
            }
            if (pan(p2)) {
                if (first){
                    first= false;
                    p->next=p2;
                    p3=p2;
                }else{
                    p3->next=p2;
                    p3=p3->next;
                }
            }
            p1=p2;
            p2=p2->next;
        }
        return p->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}