#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int ans=0,n=nums.size();
        for (int i = 0; i < n; ++i) {
            int l=0;
            for (int j = i; j < n; ++j) {
                if (l==0)
                    l=nums[j];
                else
                    l=l*nums[j]/__gcd(l,nums[j]);
                if (k%l)
                    break;
                else if (k==l)
                    ++ans;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}