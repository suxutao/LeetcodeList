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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int ans=0,cnt=0;
        while (head){
            if (s.contains(head->val)){
                cnt++;
            }else if (cnt){
                cnt=0;
                ans++;
            }
            head=head->next;
        }
        return ans+(cnt!=0);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}