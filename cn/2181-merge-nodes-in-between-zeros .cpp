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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*p1=new ListNode(0),*p2=p1;
        head=head->next;
        while (head){
            int ans=0;
            while (head->val){
                ans+=head->val;
                head=head->next;
            }
            p2->next=new ListNode(ans);
            p2=p2->next;
            head=head->next;
        }
        return p1->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}