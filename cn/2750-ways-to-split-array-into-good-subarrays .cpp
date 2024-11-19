#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    int numberOfGoodSubarraySplits(vector<int>& nums) {
        if (find(nums.begin(), nums.end(),1)==nums.end())
            return 0;
        long long ans=1,cnt=1,i;
        for (i = 0; i < nums.size(); ++i) {
            if (nums[i])
                break;
        }
        for (; i < nums.size(); ++i) {
            if (nums[i]){
                ans=(ans*cnt)%N;
                cnt=1;
            }else{
                cnt++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}