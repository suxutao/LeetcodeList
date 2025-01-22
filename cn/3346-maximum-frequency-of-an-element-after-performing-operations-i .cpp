#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
        int n=nums.size(),mx=ranges::max(nums),ans=0;
        unordered_map<int,int>m;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; ++i) {
            ++m[nums[i]];
        }
        for (int i = 1; i <= mx; ++i) {
            auto per=lower_bound(nums.begin(), nums.end(),i-k);
            auto suf=upper_bound(nums.begin(), nums.end(),i+k);
            ans=max(ans, min<int>(suf-per-m[i],numOperations)+m[i]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}