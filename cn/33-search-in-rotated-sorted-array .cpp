#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,L,R,mid,bi=nums[0];
        while (l<r){
            mid=(l+r)>>1;
            if (nums[mid]<bi)
                r=mid;
            else
                l=mid+1;
        }
        if (target>=bi)
            L=0,R=l;
        else
            L=l,R=nums.size()-1;
        while (L<=R){
            mid=(L+R)>>1;
            if (nums[mid]==target)
                return mid;
            else if (nums[mid]<target)
                L=mid+1;
            else
                R=mid-1;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}