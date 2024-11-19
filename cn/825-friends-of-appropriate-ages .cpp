#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        int n=ages.size(),ans=0;
        sort(ages.begin(), ages.end());
        for (int i = 0; i < n; ++i) {
            int pos1=upper_bound(ages.begin(), ages.end(),ages[i]/2.+7)-ages.begin();
            ans+= max(0,i-pos1);
            if (ages[i]>14){
                int pos2=upper_bound(ages.begin(), ages.end(),ages[i])-ages.begin();
                ans+= max(0,pos2-i-1);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}