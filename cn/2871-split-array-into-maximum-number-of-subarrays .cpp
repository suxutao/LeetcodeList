#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxSubarrays(vector<int>& nums) {
        int n=nums.size(),MIN=nums[0],temp=nums[0],ans=0;
        nums.push_back(0);
        for (int i = 1; i < n; ++i) {
            MIN&=nums[i];
        }
        if (MIN)
            return 1;
        for (int i = 0; i < n; ++i) {
            temp&=nums[i];
            if (temp==MIN){
                ++ans;
                temp=nums[i+1];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}