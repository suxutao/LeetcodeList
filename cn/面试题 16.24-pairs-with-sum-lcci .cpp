#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> pairSums(vector<int>& nums, int target) {
        int n=nums.size(),l=0,r=n-1;
        vector<vector<int>>v;
        ranges::sort(nums);
        while (l<r){
            if (nums[l]+nums[r]==target){
                v.push_back({nums[l],nums[r]});
                l++;r--;
            }else if (nums[l]+nums[r]>target){
                r--;
            }else{
                l++;
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}