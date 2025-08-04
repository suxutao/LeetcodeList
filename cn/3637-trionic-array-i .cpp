#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n=nums.size(),a=-1,b=-1;
        if (nums[1]<nums[0])
            return false;
        if (nums[n-1]<nums[n-2])
            return false;
        for (int i = 1; i < n; ++i) {
            if (nums[i-1]>nums[i]){
                a=i;
                break;
            }else if (nums[i-1]==nums[i]){
                return false;
            }
        }
        if (a==-1)
            return false;
        for (int i = a+1; i < n; ++i) {
            if (nums[i-1]<nums[i]){
                b=i;
                break;
            }else if (nums[i-1]==nums[i]){
                return false;
            }
        }
        if (b==-1)
            return false;
        for (int i = b+1; i < n; ++i) {
            if (nums[i-1]>nums[i]){
                return false;
            }else if (nums[i-1]==nums[i]){
                return false;
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}