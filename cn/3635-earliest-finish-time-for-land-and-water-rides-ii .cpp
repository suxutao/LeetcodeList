#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n=landStartTime.size(),m=waterStartTime.size();
        int l=INT_MAX,w=INT_MAX,ans=INT_MAX;
        for (int i = 0; i < n; ++i) {
            l= min(l,landStartTime[i]+landDuration[i]);
        }
        for (int i = 0; i < m; ++i) {
            w= min(w,waterStartTime[i]+waterDuration[i]);
        }
        for (int i = 0; i < n; ++i) {
            ans= min(ans,max(w,landStartTime[i])+landDuration[i]);
        }
        for (int i = 0; i < m; ++i) {
            ans= min(ans,max(l,waterStartTime[i])+waterDuration[i]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}