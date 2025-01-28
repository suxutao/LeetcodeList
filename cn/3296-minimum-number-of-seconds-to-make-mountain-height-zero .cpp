#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
using ll = long long;
static ll jie[100001]{};
class Solution {
public:
    struct com{
        bool operator()(pair<ll,ll>&a,pair<ll,ll>&b){
            return a.first*jie[a.second]>b.first*jie[b.second];
        }
    };
    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        ll ans=0;
        priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,com>q;
        for (auto &item: workerTimes){
            q.emplace(item,1);
        }
        for (int i = 1; i <= 100000; ++i) {
            jie[i]=jie[i-1]+i;
        }
        for (int i = 0; i < mountainHeight; ++i) {
            auto [x,y]=q.top();
            q.pop();
            ans= max(ans,x*jie[y]);
            ++y;
            q.emplace(x,y);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{1,8};
    Solution().minNumberOfSeconds(9,v);
    return 0;
}