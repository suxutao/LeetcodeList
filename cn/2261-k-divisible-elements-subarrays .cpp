#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ull = unsigned long long;
    const ull P=131313;
    int countDistinct(vector<int>& nums, int k, int p) {
        int n=nums.size(),l=0,r=0,sum=0;
        vector<vector<ull>>dp(n,vector<ull>(n));
        unordered_set<ull>s;
        for (int i = 0; i < n; ++i) {
            ull t=0;
            for (int j = i; j < n; ++j) {
                t=t*P+nums[j];
                dp[i][j]=t;
            }
        }
        while (r<n){
            sum+=nums[r]%p==0;
            while (sum>k){
                sum-=nums[l++]%p==0;
            }
            for (int i = l; i <= r; ++i) {
                s.insert(dp[i][r]);
            }
            ++r;
        }
        return s.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}