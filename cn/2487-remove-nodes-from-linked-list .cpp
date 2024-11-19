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
    ListNode* removeNodes(ListNode* head) {
        deque<int>s;
        while (head){
            while (!s.empty()&&s.back()<head->val)
                s.pop_back();
            s.push_back(head->val);
            head=head->next;
        }
        ListNode*p=new ListNode(s.front()),*p2=p;
        for (int i = 1; i < s.size(); ++i) {
            p2->next=new ListNode(s[i]);
            p2=p2->next;
        }
        return p;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}