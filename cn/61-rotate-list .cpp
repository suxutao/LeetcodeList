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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head||!head->next||k==0)
            return head;
        int cnt=0;
        ListNode*p=head,*pre,*ans;
        while (p){
            cnt++;
            p=p->next;
        }
        k%=cnt;
        if (k==0)
            return head;
        p=head;
        for (int i = 0; i < cnt-k; ++i) {
            pre=p;
            p=p->next;
        }
        ans=p;
        pre->next= nullptr;
        while (p->next)
            p=p->next;
        p->next=head;
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}