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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        stack<int>s;
        ListNode*p=head;
        for (int i = 0; i < right&&p!= nullptr; ++i) {
            if (i>=left-1)
                s.push(p->val);
            p=p->next;
        }
        p=head;
        for (int i = 0; i < right&&p!= nullptr; ++i) {
            if (i>=left-1) {
                p->val = s.top();
                s.pop();
            }
            p=p->next;
        }
        return head;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}