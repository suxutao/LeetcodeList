#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii = pair<int, int>;
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n=plantTime.size(),ans=0,sum=0;
        vector<pii>v(n);
        for (int i = 0; i < n; ++i) {
            v[i]={plantTime[i],growTime[i]};
        }
        sort(v.begin(), v.end(),[&](pii&a,pii&b){
            return max(a.first+b.first+b.second,a.first+a.second)<max(a.first+b.first+a.second,b.first+b.second);
        });
        for (int i = 0; i < n; ++i) {
            sum+=v[i].first;
            ans= max(ans,sum+v[i].second);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}