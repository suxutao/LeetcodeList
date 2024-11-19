#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size()-1; ++i) {
            if (nums[0]>0)
                break;
            if (i>0&&nums[i]==nums[i-1])
                continue;
            int l=i+1,r=nums.size()-1;
            while(l<r){
            if (nums[i]+nums[l]+nums[r]==0){
                v.push_back({nums[i], nums[l], nums[r]});
                while(nums[l]==nums[l+1]&&l<r-1)
                    l++;
                while(nums[r]==nums[r-1]&&l<r-1)
                    r--;
                l++;r--;
            }else if(nums[i]+nums[l]+nums[r]<0){
                l++;
            }else{
                r--;
            }}
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}