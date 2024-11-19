#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        int ans=0,n=events.size();
        vector<int>suf(n+1);
        sort(events.begin(), events.end());
        for (int i = n-1; i >= 0; --i) {
            suf[i]= max(suf[i+1],events[i][2]);
        }
        for (int i = 0; i < n; ++i) {
            vector<int>temp{events[i][1]+1,0,0};
            int pos=lower_bound(events.begin(), events.end(),temp)-events.begin();
            ans= max(ans,events[i][2]+suf[pos]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}