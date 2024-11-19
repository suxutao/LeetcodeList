#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int ans=0;
        vector<int>v(nums.size()+1);
        for (int i = 0; i < nums.size(); ++i) {
            if (i) v[i]^=v[i-1];
            if ((v[i]^nums[i])==0){
                if (i+k>nums.size())
                    return -1;
                v[i+k]^=1;
                v[i]^=1;
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