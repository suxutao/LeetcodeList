#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n=nums.size(),ans=0;
        int mn=*max_element(nums.begin(), nums.end());
        for (int i = -mn; i <= mn; ++i) {
            unordered_map<int,int>m;
            for (int j = 0; j < n; ++j) {
                m[nums[j]]=m[nums[j]-i]+1;
                ans= max(ans,m[nums[j]]);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}