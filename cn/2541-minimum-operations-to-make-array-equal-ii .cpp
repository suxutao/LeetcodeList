#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    ll minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        if (k==0)
            return nums1==nums2?0:-1;
        int n=nums1.size();ll ans=0,sum=0;
        for (int i = 0; i < n; ++i) {
            nums1[i]-=nums2[i];
            if (nums1[i]%k)
                return -1;
            sum+=nums1[i]/k;
            ans+= abs(nums1[i]/k);
        }
        if (sum)
            return -1;
        return ans/2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}