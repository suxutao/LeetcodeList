#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        if (nums.size()==1)
            return 1;
        int n=nums.size(),mx=INT_MIN,px=0,mn=INT_MAX,pn=0;
        for (int i = 0; i < n; ++i) {
            if (nums[i]>mx){
                mx=nums[i];
                px=i+1;
            }
            if (nums[i]<mn){
                mn=nums[i];
                pn=i+1;
            }
        }
        if (px<pn)
            swap(px,pn);
        return min(min(px,n-pn+1),pn+n-px+1);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}