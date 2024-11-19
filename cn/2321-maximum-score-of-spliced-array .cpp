#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),MAX=INT_MIN,MIN=INT_MAX,MAX1=INT_MIN,MIN1=INT_MAX;
        int sum1=accumulate(nums1.begin(), nums1.end(),0);
        int sum2=accumulate(nums2.begin(), nums2.end(),0);
        vector<int>v(n);
        for (int i = 0; i < n; ++i) {
            v[i]=nums1[i]-nums2[i];
            MAX= max(MAX,0)+v[i];
            MAX1= max(MAX,MAX1);
            MIN= min(MIN,0)+v[i];
            MIN1= min(MIN,MIN1);
        }
        return max(sum1-MIN1,sum2+MAX1);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}