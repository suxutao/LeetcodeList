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
    void reorderList(ListNode* head) {
        stack<ListNode*>s;
        queue<ListNode*>q;
        ListNode*p=head;
        while (p!= nullptr){
            s.push(p);
            q.push(p);
            p=p->next;
        }
        p=head;
        int n=q.size();
        for (int i = 0; i <= n; ++i) {
            if (!(i&1)) {
                p->next = q.front();
                q.pop();
            }else {
                p->next = s.top();
                s.pop();
            }
            p=p->next;
        }
        p->next= nullptr;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}