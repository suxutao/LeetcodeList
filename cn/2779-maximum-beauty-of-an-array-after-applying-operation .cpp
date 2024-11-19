#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int n=nums.size(),ans=1;
        sort(nums.begin(), nums.end());
        int p=0,e=0;
        for (int i = -1; i < nums.back()+1; ++i) {
            while (p<n&&i+k>=nums[p]){
                p++;
            }
            while (e<p&&i-k>nums[e]){
                e++;
            }
            ans= max(ans,p-e);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}