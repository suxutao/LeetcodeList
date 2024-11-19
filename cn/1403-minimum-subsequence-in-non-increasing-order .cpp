#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int>v;
        sort(nums.begin(), nums.end(),greater<>());
        int sum=accumulate(nums.begin(), nums.end(),0),t=0;
        for (int i = 0; i < nums.size(); ++i) {
            t+=nums[i];
            v.push_back(nums[i]);
            if (t*2>sum)
                break;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}