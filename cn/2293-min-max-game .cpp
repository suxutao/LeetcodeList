#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n=nums.size();
        while (n>1){
            n/=2;
            vector<int>v(n);
            for (int i = 0; i < n; ++i) {
                if (i&1)
                    v[i]= max(nums[i<<1],nums[i<<1|1]);
                else
                    v[i]= min(nums[i<<1],nums[i<<1|1]);
            }
            nums=v;
        }
        return nums[0];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}