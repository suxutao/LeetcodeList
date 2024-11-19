#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (target<=nums[0])
            return 0;
        if (target==nums[nums.size()-1])
            return nums.size()-1;
        if (target>nums[nums.size()-1])
            return nums.size();
        int l=0,r=nums.size()-1,middle;
        while(l<=r){
            if (l==r){
                if (nums[l]>=target)
                    return l;
                else
                    return l+1;
            }
            middle=(l+r)/2;
            if (nums[middle]==target)
                return middle;
            else if (nums[middle]<target) {
                l = middle+1;
            }
            else {
                r = middle-1;
            }
        }
        return middle;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v={1,3,5,6};
    Solution().searchInsert(v,2);
    return 0;
}