#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int ans=0;
        for (int i = 0; i < nums.size(); ++i) {
            int g=0;
            for (int j = i; j < nums.size(); ++j) {
                g=__gcd(g,nums[j]);
                if (g%k)
                    break;
                else if (g==k)
                    ans++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}