#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumArrayLength(vector<int>& nums) {
        int k=*min_element(nums.begin(), nums.end()),cnt=0,MIN=k;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]==k)
                cnt++;
            if (nums[i]%k){
                MIN= min(MIN,nums[i]%k);
            }
        }
        if (MIN<k)
            return 1;
        return (1+cnt)/2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}