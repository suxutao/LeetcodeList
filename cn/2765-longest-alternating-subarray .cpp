#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int ans=-1,l=0,r=1,ji;
        while (r<nums.size()&&l<nums.size()){
            ji=1;
            int k=l,p=r;
            while (r<nums.size()&&l<nums.size()&&nums[r]-nums[l]==1){
                if (ji&1)
                    l+=2;
                else
                    r+=2;
                ji++;
            }
            r=p+1;l=k+1;
            if (ji!=1)
                ans= max(ans,ji);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}