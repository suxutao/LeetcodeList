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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int>s1,s2,a;
        while (l1){
            s1.push(l1->val);
            l1=l1->next;
        }
        while (l2){
            s2.push(l2->val);
            l2=l2->next;
        }
        int b,gewei,jinwei=0;
        while(!s1.empty()&&!s2.empty()){
            b=s1.top()+s2.top()+jinwei;
            gewei=b%10,jinwei=b/10;
            a.push(gewei);s1.pop();s2.pop();
        }
        while (!s1.empty()){
            b=s1.top()+jinwei;
            gewei=b%10,jinwei=b/10;
            a.push(gewei);s1.pop();
        }
        while (!s2.empty()){
            b=s2.top()+jinwei;
            gewei=b%10,jinwei=b/10;
            a.push(gewei);s2.pop();
        }
        if (jinwei)
            a.push(1);
        ListNode*ans=new ListNode(a.top()),*p=ans;
        a.pop();
        while(!a.empty()){
            p->next=new ListNode(a.top());
            p=p->next;a.pop();
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}