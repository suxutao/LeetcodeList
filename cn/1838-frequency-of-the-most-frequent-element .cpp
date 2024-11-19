#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int maxFrequency(vector<int>& nums, int k) {
        int ans=0,l=0,r=0,n=nums.size();
        sort(nums.begin(), nums.end());
        vector<ll>s(n+1);
        for (int i = 1; i <= n; ++i) {
            s[i]=s[i-1]+nums[i-1];
        }
        while (r<n){
            while (k<(ll)(r-l+1)*nums[r]-s[r+1]+s[l]){
                ++l;
            }
            ans= max(ans,r-l+1);
            ++r;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}