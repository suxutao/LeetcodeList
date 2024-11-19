#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<pair<int,int>>v(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            v[i]={nums[i],i};
        }
        std::sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); ++i) {
            nums[v[i].second]=i;
            if (i>0&&v[i].first==v[i-1].first)
                nums[v[i].second]=nums[v[i-1].second];
        }
        return nums;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}