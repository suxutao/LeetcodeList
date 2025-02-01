#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size(),l=0,r=n;
        while (l<r){
            int mid=(l+r)>>1;
            if (nums[mid]==target)
                return mid;
            if (nums[mid]>nums[l]){
                if (target>=nums[l]&&target<=nums[mid])
                    r=mid;
                else
                    l=mid+1;
            }else{
                if (target<=nums[mid]||target>=nums[l])
                    r=mid;
                else
                    l=mid+1;
            }
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}