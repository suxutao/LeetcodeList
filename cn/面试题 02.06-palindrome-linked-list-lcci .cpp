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
    vector<int>s;
    bool isPalindrome(ListNode* head) {
        ListNode*p=head;
        while (p){
            s.push_back(p->val);
            p=p->next;
        }
        int l=0,r=s.size()-1;
        while (l<r){
            if (s[l]!=s[r])
                return false;
            l++;r--;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}