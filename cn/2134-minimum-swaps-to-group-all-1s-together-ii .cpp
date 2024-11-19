#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minSwaps(vector<int>& nums) {
        if (nums.size()<=3)
            return 0;
        int n=nums.size(),ans,cnt=0;
        int k= count(nums.begin(), nums.end(),1);
        for (int i = 0; i < n - 1; ++i) {
            nums.push_back(nums[i]);
        }
        for (int i = 0; i < k; ++i) {
            cnt+=nums[i]==1;
        }
        ans=k-cnt;
        for (int i = k; i < n + k; ++i) {
            cnt+=nums[i]==1;
            cnt-=nums[i-k]==1;
            ans= min(ans,k-cnt);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}