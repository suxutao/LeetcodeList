#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n,1);
        for (int i = 0; i < n; ++i) {
            for (int j = i-1; j>=0&&(nums[i]|nums[j])!=nums[j] ; --j) {
                nums[j]|=nums[i];
                v[j]=i-j+1;
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v={1,0,2,1,3};
    Solution().smallestSubarrays(v);
    return 0;
}