#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long countAlternatingSubarrays(vector<int>& nums) {
        ll ans=0,cnt=1;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i]!=nums[i-1]){
                ++cnt;
            }else{
                ans+=(cnt+1)*cnt/2;
                cnt=1;
            }
        }
        ans+=(cnt+1)*cnt/2;
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}