#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int n=nums.size(),ans=0,l=k,r=k;
        for (int i = nums[k]; i >0 ; --i) {
            while (l>=0&&nums[l]>=i)
                l--;
            while (r<n&&nums[r]>=i)
                r++;
            ans= max(ans,i*(r-l-1));
            if (l<0&&r>=n)
                break;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}