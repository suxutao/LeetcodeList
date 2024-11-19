#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int g=accumulate(nums.begin(), nums.end(),0,__gcd<int>);
        if (g!=1)
            return -1;
        int cnt=count(nums.begin(), nums.end(),1),n=nums.size(),MIN=n;
        if (cnt)
            return n-cnt;
        for (int i = 0; i < n; ++i) {
            g=0;
            for (int j = i; j < n; ++j) {
                g=__gcd(g,nums[j]);
                if (g==1) {
                    MIN = min(MIN, j - i);
                    break;
                }
            }
        }
        return MIN+n-cnt-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}