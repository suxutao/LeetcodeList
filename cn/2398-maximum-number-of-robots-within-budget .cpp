#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int maximumRobots(vector<int>& chargeTimes, vector<int>& runningCosts, long long budget) {
        int ans=0,n=chargeTimes.size(),l=0;
        deque<ll>d;
        ll sum=0;
        for (int i = 0; i < n; ++i) {
            while (!d.empty()&&chargeTimes[d.back()]<=chargeTimes[i]){
                d.pop_back();
            }
            d.push_back(i);
            sum+=runningCosts[i];
            while (!d.empty()&&chargeTimes[d.front()]+(i-l+1)*sum>budget){
                if (d.front()==l)
                    d.pop_front();
                sum-=runningCosts[l++];
            }
            ans= max(ans,i-l+1);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}