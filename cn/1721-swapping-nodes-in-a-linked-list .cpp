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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*p=head;
        int sum=0,x,y;
        for (int i = 0; i < k-1; ++i) {
            p=p->next;
        }
        x=p->val;
        while (p){
            p=p->next;
            sum++;
        }
        p=head;
        for (int i = 0; i < sum - 1; ++i) {
            p=p->next;
        }
        y=p->val;
        p->val=x;
        p=head;
        for (int i = 0; i < k - 1; ++i) {
            p=p->next;
        }
        p->val=y;
        return head;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}