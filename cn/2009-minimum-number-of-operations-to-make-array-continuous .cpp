#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        set<int>s(nums.begin(),nums.end());
        nums.assign(s.begin(),s.end());
        int j=0,ans=n;
        for (int i = 0; i < nums.size(); ++i) {
            int r=nums[i]+n-1;
            while (j<nums.size()&&nums[j]<=r){
                ans= min(ans,n-j+i-1);
                ++j;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}