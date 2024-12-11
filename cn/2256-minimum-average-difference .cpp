#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long sum=accumulate(nums.begin(), nums.end(),0ll),pre=0,MIN=INT_MAX,ans=0;
        int n=nums.size();
        for (int i = 0; i < n; ++i) {
            pre+=nums[i];
            sum-=nums[i];
            long long temp=0;
            if (i==n-1){
                temp=abs(pre/(i+1));
            }else{
                temp=abs(pre/(i+1)-sum/(n-i-1));
            }
            if (temp<MIN){
                MIN=temp;
                ans=i;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}