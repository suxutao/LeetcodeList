#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int destroyTargets(vector<int>& nums, int space) {
        sort(nums.begin(), nums.end());
        int n=nums.size(),ans=nums.back(),MAX=0;
        unordered_map<int,int>m,mn;
        for (int i = 0; i < n; ++i) {
            ++m[nums[i]%space];
            if (mn[nums[i]%space])
                mn[nums[i]%space]= min(nums[i],mn[nums[i]%space]);
            else
                mn[nums[i]%space]=nums[i];
        }
        for (auto &[a,b]: m){
            if (b>MAX){
                MAX=b;
                ans=mn[a];
            }else if (b==MAX){
                ans= min(ans,mn[a]);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}