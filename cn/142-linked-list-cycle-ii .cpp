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
    ListNode *detectCycle(ListNode *head) {
        if (head==NULL)
            return NULL;
        ListNode*p=head;
        unordered_map<ListNode*,int>u;
        while(p->next!=NULL){
            if (u.find(p)!=u.end()){
                return p;
            }else{
                u[p]=1;
                p=p->next;
            }
        }
        return NULL;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}