#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (target==nums[nums.size()-1])
            return nums.size()-1;
        if (target==nums[0])
            return 0;
        int l=0,r=nums.size()-1;
        int a=r/2;
        do{
            if (nums[a]==target)
                return a;
            else if(nums[a]<target)
                l=a;
            else
                r=a;
            a=(l+r)/2;
        }while (l<r-1);
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>s={-1,0,3,5,9,12};
    vector<int>s1={5};
    cout<<Solution().search(s1,5)<<endl;
    return 0;
}