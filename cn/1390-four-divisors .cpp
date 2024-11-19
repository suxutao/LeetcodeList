#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n=nums.size(),sum=0;
        for (int i = 0; i < n; ++i) {
            int t= sqrt(nums[i]),cnt=0,jia;
            if (t*t==nums[i])
                continue;
            for (int j = 2; j <= t; ++j) {
                if (nums[i]%j==0)
                    cnt++,jia=j;
                if (cnt>1)
                    break;
            }
            if (cnt==1)
                sum+=nums[i]+1+jia+nums[i]/jia;
        }
        return sum;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}