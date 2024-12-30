#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long numberOfSubsequences(vector<int>& nums) {
        ll n=nums.size(),ans=0;
        unordered_map<int,int>suf;
        for (int i = 4; i < n; ++i) {
            for (int j = i+2; j < n; ++j) {
                int g= gcd(nums[i],nums[j]);
                ++suf[(nums[j]/g<<16)|(nums[i]/g)];
            }
        }
        for (int i = 2; i < n - 4; ++i) {
            for (int j = 0; j < i - 1; ++j) {
                int g= gcd(nums[i],nums[j]);
                ans+=suf[(nums[j]/g<<16)|(nums[i]/g)];
            }
            for (int j = i+4; j < n; ++j) {
                int g= gcd(nums[j],nums[i+2]);
                --suf[(nums[j]/g<<16)|(nums[i+2]/g)];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}