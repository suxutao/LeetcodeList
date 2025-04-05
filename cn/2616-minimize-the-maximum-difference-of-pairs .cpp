#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        ranges::sort(nums);
        int n=nums.size(),l=0,r=nums.back()+1;
        auto check=[&](int x)->bool {
            int sum=0;
            for (int i = 1; i < n; ++i) {
                if (nums[i]-nums[i-1]<=x){
                    sum++;
                    i++;
                }
            }
            return sum>=p;
        };
        while (l<r){
            int mid=(l+r)>>1;
            if (!check(mid)){
                l=mid+1;
            }else{
                r=mid;
            }
        }
        return l;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}