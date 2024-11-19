#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int ans=0,ans2=0;
        std::sort(nums.begin(), nums.end());
        if (nums.size()&1){
            int k=nums[nums.size()/2];
            for (int i = 0; i < nums.size(); ++i) {
                ans+= abs(k-nums[i]);
            }
            return ans;
        }else{
            int k1=nums[nums.size()/2],k2=nums[nums.size()/2-1];
            for (int i = 0; i < nums.size(); ++i) {
                ans+= abs(k1-nums[i]);
            }
            for (int i = 0; i < nums.size(); ++i) {
                ans2+= abs(k2-nums[i]);
            }
            return min(ans,ans2);
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}