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
    ListNode* doubleIt(ListNode* head) {
        if (head->val==0)
            return head;
        vector<int>st,v;
        int val,jin=0;
        while (head){
            st.push_back(head->val);
            head=head->next;
        }
        for (int i = st.size()-1; i >= 0; --i) {
            val=st[i]*2+jin;
            v.push_back(val%10);
            jin=val/10;
        }
        if (jin)
            v.push_back(jin);
        ListNode*p=new ListNode(v.back()),*ans=p;
        for (int i = v.size()-2; i >= 0; --i) {
            p->next=new ListNode(v[i]);
            p=p->next;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}