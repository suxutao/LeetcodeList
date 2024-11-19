#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n=nums.size(),yi=0,MAX=(1<<maximumBit)-1;
        vector<int>v(n);
        for (int i = 0; i < n; ++i) {
            yi^=nums[i];
        }
        for (int i=n-1;i>=0;--i){
            v[n-i-1]=MAX^yi;
            yi^=nums[i];
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}