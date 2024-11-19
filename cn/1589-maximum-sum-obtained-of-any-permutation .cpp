#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests) {
        ll ans=0;
        vector<int>v(nums.size()+1);
        for (auto &i: requests){
            ++v[i[0]];
            --v[i[1]+1];
        }
        for (int i = 1; i < nums.size(); ++i) {
            v[i]+=v[i-1];
        }
        v.pop_back();
        std::sort(v.begin(), v.end());
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i) {
            ans+=(ll)nums[i]*v[i];
        }
        return ans%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}