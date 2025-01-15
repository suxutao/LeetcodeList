#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n=nums.size(),ans=0;
        for (int i = 0; i < n; ++i) {
            long long ji=nums[i],g=nums[i],l=nums[i];
            for (int j = i+1; j < n; ++j) {
                ji*=nums[j];
                g= gcd(g,nums[j]);
                l= lcm(l,nums[j]);
                if (ji==g*l)
                    ans= max(ans,j-i+1);
                else if (ji>l)
                    break;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}