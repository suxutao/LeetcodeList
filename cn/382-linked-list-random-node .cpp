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
    ListNode*h;
    Solution(ListNode* head) {
        h=head;
    }
    
    int getRandom() {
        ListNode*p=h;
        int ans;
        for (int i=1; p; ++i,p=p->next) {
            int random = rand()%i;
            if (random==0) {
                ans= p->val;
            }
        }
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}