#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int ans=0,n=nums.size();
        vector<int>v1(n),v2(n);
        for (int i = 0; i < n; ++i) {
            v1[i]=nums[i]%10;
            while (nums[i]>=10)
                nums[i]/=10;
            v2[i]=nums[i];
        }
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                if (gcd(v2[i],v1[j])==1)
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