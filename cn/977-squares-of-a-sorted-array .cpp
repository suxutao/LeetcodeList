#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v(nums.size());
        int l=0,r=nums.size()-1;
        int i=v.size();
        if (l==r){
            v[0]=nums[0]*nums[0];
            return v;
        }
        nums[l]*=nums[l];
        nums[r]*=nums[r];
        while(l<r){
            if (nums[l]<nums[r]){
                v[--i]=nums[r];
                r--;
                if (r==l) { v[--i] = nums[l];
                    break; }
                else
                    nums[r]*=nums[r];
            }
            else{
                v[--i]=nums[l];
                l++;
                if (r==l) { v[--i] = nums[l];
                    break; }
                else
                    nums[l]*=nums[l];
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v={-7,-3,2,3,11};
    Solution().sortedSquares(v);
    return 0;
}