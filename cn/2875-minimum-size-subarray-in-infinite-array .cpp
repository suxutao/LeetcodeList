#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minSizeSubarray(vector<int>& nums, int target) {
        long long n=nums.size(),sum=accumulate(nums.begin(), nums.end(),0ll),a1=n*(target/sum),yu=target%sum,a2=-1,l=0;
        for (int i = 0; i < n; ++i) {
            nums.push_back(nums[i]);
        }
        sum=0;
        for (int r = 0; r < n * 2; ++r) {
            sum+=nums[r];
            while (sum>yu){
                sum-=nums[l++];
            }
            if (sum==yu){
                if (~a2)
                    a2=min(a2,r-l+1);
                else
                    a2=r-l+1;
            }
        }
        return a2==-1?-1:a2+a1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}