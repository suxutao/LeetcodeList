#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int temp,l=0,r=nums.size()-1;
        bool aa= true;
        if (l==r)
            return nums[0]==val?0:1;
        for (int i = 0; i <= r; ++i) {
            if (nums[i]==val){
                aa= false;
                break;
            }
        }
        if (aa)
            return r+1;
        while (l<r){
            while(nums[l]!=val)
                l++;
            while(nums[r]==val&&r)
                r--;
            if (l<r){
                temp=nums[l];
                nums[l]=nums[r];
                nums[r]=temp;
            }
        }
        return l;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v={3,3};
    cout<<Solution().removeElement(v,5)<<endl;
    return 0;
}