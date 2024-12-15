#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n=arr.size(),r=n-1,l,sum=0,pre=INT_MAX/2,ans=INT_MAX;
        vector<int>suf(n+1,INT_MAX/2);
        for (l = n-1; l >= 0; --l) {
            sum+=arr[l];
            while (sum>target){
                sum-=arr[r--];
            }
            if (sum==target){
                suf[l]= min(suf[l+1],r-l+1);
            }else{
                suf[l]=suf[l+1];
            }
        }
        sum=0,l=0;
        for (r = 0; r < n; ++r) {
            sum+=arr[r];
            while (sum>target){
                sum-=arr[l++];
            }
            if (sum==target){
                pre=min(pre,r-l+1);
            }
            ans=min(ans,pre+suf[r+1]);
        }
        return ans>=INT_MAX/2?-1:ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}