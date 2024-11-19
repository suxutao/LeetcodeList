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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*p=head;
        stack<int>s;
        while (p){
            ListNode*p2=p;
            for (int i = 0; p&&i < k; ++i) {
                s.push(p->val);
                p=p->next;
            }
            if (s.size()==k){
                for (int i = 0; i < k; ++i) {
                    p2->val=s.top();
                    s.pop();
                    p2=p2->next;
                }
            }else break;
        }
        return head;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}