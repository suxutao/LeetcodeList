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
    ListNode* removeZeroSumSublists(ListNode* head) {
        vector<pair<int,int>>v;
        unordered_map<int,int>m;
        bool vis[1005]{1};
        int cnt=1,sum=0;
        while (head){
            v.push_back({cnt,head->val});
            sum+=head->val;
            vis[cnt]=1;
            if (!m[sum]&&sum)
                m[sum]=cnt;
            else{
                if (vis[m[sum]]){
                    while (!v.empty()&&v.back().first>m[sum]){
                        vis[v.back().first]=0;
                        v.pop_back();
                    }
                }else{
                    m[sum]=cnt;
                }
            }
            cnt++;
            head=head->next;
        }
        ListNode*p=new ListNode,*ans=p;
        for (int i = 0; i < v.size(); ++i) {
            p->next=new ListNode(v[i].second);
            p=p->next;
        }
        return ans->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}