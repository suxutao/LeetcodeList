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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>v,ans;
        while (head){
            v.push_back(head->val);
            head=head->next;
        }
        ans.resize(v.size());
        stack<int>st;
        for (int i = v.size()-1; i >= 0; --i) {
            while (!st.empty()&&v[st.top()]<=v[i]){
                st.pop();
            }
            if (!st.empty())
                ans[i]=v[st.top()];
            st.push(i);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}