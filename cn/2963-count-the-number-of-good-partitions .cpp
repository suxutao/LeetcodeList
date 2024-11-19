#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    ll fast(ll a,ll x){
        ll ans=1;
        while (x){
            if (x&1)
                ans=(a*ans)%N;
            a=(a*a)%N;
            x>>=1;
        }
        return ans;
    }
    int numberOfGoodPartitions(vector<int>& nums) {
        unordered_map<int,vector<int>>m;
        int n=nums.size(),MAX=0,cnt=0,pos=0;
        for (int i = 0; i < n; ++i) {
            m[nums[i]].push_back(i);
        }
        while (pos<n){
            while (pos<=MAX){
                MAX= max(MAX,m[nums[pos]].back());
                pos++;
            }
            cnt++;
            MAX=pos;
        }
        return fast(2,cnt-1);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}