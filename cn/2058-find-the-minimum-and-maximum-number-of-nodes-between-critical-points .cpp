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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>ans(2,INT_MAX);
        vector<int>v;
        int pre=head->val,cnt=0;
        head=head->next;
        while (head->next){
            if (head->val>pre&&head->val>head->next->val||head->val<pre&&head->val<head->next->val)
                v.push_back(cnt);
            pre=head->val;
            head=head->next;
            cnt++;
        }
        if (v.size()<2)
            return {-1,-1};
        ans[1]=v.back()-v.front();
        for (int i = 1; i < v.size(); ++i) {
            ans[0]= min(ans[0],v[i]-v[i-1]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}