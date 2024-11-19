#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size(),l=0,r=0,ans=0;
        unordered_map<int,int>m;
        while (r<n){
            ++m[nums[r]];
            while (m[nums[r]]>k)
                --m[nums[l++]];
            ans= max(ans,r-l+1);
            ++r;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}