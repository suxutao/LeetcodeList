#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if (nums.size()==1||nums.size()==2&&nums[0]==nums[1])
            return 1;
        if (nums.size()==2)
            return 2;
        int ans=1;
        int p=1;
        bool dayu= nums[1]>nums[0];
        while (p<nums.size()) {
            int a=nums[p-1];
            if (dayu){
                while(nums[p]>=nums[p-1]&&p<nums.size())
                    p++;
                dayu= false;
                ans+=a==nums[p-1]?0:1;
            }else{
                while(nums[p]<=nums[p-1]&&p<nums.size())
                    p++;
                dayu= true;
                ans+=a==nums[p-1]?0:1;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}