#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int>s;
        int l=0,r=0,ans=0,n=nums.size();
        while (r<n){
            s.insert(nums[r]);
            while (*s.rbegin()-*s.begin()>limit)
                s.extract(nums[l++]);
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