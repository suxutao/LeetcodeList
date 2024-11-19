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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty())
            return nullptr;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>q;
        int val,pos;
        ListNode*p= new ListNode(-1),*p2=p;
        int n=lists.size();
        for (int i = 0; i < n; ++i) {
            if (lists[i]!= nullptr) {
                q.push({lists[i]->val, i});
                lists[i] = lists[i]->next;
            }
        }
        if (q.empty())
            return nullptr;
        while (!q.empty()){
            tie(val,pos)=q.top();
            p2->next=new ListNode(val);
            p2=p2->next;
            if (lists[pos]!= nullptr) {
                q.push({lists[pos]->val, pos});
                lists[pos]=lists[pos]->next;
            }
            q.pop();
        }
        return p->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}