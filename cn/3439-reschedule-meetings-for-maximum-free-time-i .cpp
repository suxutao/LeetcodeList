#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        int n=startTime.size(),ans=0,add=0;
        vector<int>v;
        if (startTime[0])
            v.push_back(startTime[0]);
        for (int i = 0; i < n-1; ++i) {
            v.push_back(startTime[i+1]-endTime[i]);
        }
        v.push_back(eventTime-endTime[n-1]);
        for (int i = 0; i < min<int>(k+1,v.size()); ++i) {
            add+=v[i];
        }
        ans=add;
        for (int i = k+1; i < v.size(); ++i) {
            add+=v[i]-v[i-k-1];
            ans= max(ans,add);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){

    return 0;
}