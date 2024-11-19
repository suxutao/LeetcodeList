#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxScore(vector<int>& nums) {
        long long ans=0,sum=0;
        sort(nums.begin(), nums.end(),greater<>());
        for (int i = 0; i < nums.size(); ++i) {
            sum+=nums[i];
            ans+=sum>0;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}