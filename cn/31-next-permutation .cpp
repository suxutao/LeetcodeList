#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(),pos=-1;
        for (int i = n - 2; i >= 0; --i) {
            if (nums[i]<nums[i+1]){
                pos=i;
                break;
            }
        }
        if (pos==-1){
            reverse(nums.begin(), nums.end());
            return;
        }
        for (int i = n - 1; i >= 0; --i) {
            if (nums[i]>nums[pos]){
                swap(nums[i],nums[pos]);
                break;
            }
        }
        reverse(nums.begin()+pos+1, nums.end());
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}