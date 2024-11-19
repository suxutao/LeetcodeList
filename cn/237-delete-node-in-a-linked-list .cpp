#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode*p=node->next;
        while (p->next){
            node->val=p->val;
            node=p;
            p=p->next;
        }
        node->val=p->val;
        node->next=NULL;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}