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
        ListNode*p=node;
        while (node->next){
            p=node;
            node->val=node->next->val;
            node=node->next;
        }
        p->next= nullptr;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}