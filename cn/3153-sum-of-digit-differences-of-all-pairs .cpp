#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long sumDigitDifferences(vector<int>& nums) {
        int n=to_string(nums[0]).size();
        ll ans=0,arr[10][10]{};
        for (auto &i: nums){
            string s=to_string(i);
            for (int j = 0; j < n; ++j) {
                arr[j][s[j]-'0']++;
            }
        }
        for (int i = 0; i < n; ++i) {
            ll t,sum=0;
            for (int j = 0; j <= 9; ++j) {
                sum+=arr[i][j];
            }
            t=sum;
            for (int j = 0; j <= 9; ++j) {
                if (arr[i][j]){
                    t-=arr[i][j];
                    ans+=t*arr[i][j];
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}