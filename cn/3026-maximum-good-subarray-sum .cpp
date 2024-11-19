#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maximumSubarraySum(vector<int>& nums, int k) {
        vector<ll>v(nums.size()+1);
        unordered_map<int,int>m;
        ll ans=LONG_LONG_MIN;
        for (int i = 0; i < nums.size(); ++i) {
            v[i+1]=v[i]+nums[i];
            if (m.contains(nums[i]-k)){
                ans=max(ans,v[i+1]-v[m[nums[i]-k]]);
            }
            if (m.contains(k+nums[i])){
                ans=max(ans,v[i+1]-v[m[k+nums[i]]]);
            }
            if (!m.contains(nums[i]))
                m[nums[i]]=i;
            else if (v[i+1]-v[m[nums[i]]+1]<0){
                m[nums[i]]=i;
            }
        }
        return ans==LONG_LONG_MIN?0:ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}