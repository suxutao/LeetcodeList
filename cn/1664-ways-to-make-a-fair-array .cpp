#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int n=nums.size(),ans=0;
        if (n==1)
            return 1;
        vector<int>pre_ji(n),pre_ou(n);
        vector<int>suf_ji(n),suf_ou(n);
        for (int i = 0; i < n; ++i) {
            if (i){
                pre_ji[i]=pre_ji[i-1];
                pre_ou[i]=pre_ou[i-1];
            }
            if (i&1){
                pre_ji[i]+=nums[i];
            }else{
                pre_ou[i]+=nums[i];
            }
        }
        for (int i = n - 1; i >= 0; --i) {
            if (i!=n-1){
                suf_ji[i]=suf_ji[i+1];
                suf_ou[i]=suf_ou[i+1];
            }
            if (i&1){
                suf_ji[i]+=nums[i];
            }else{
                suf_ou[i]+=nums[i];
            }
        }
        if (suf_ji[1]==suf_ou[1])
            ans++;
        if (pre_ji[n-2]==pre_ou[n-2])
            ans++;
        for (int i = 1; i < n-1; ++i) {
            if (pre_ou[i-1]+suf_ji[i+1]==pre_ji[i-1]+suf_ou[i+1]){
                ++ans;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}