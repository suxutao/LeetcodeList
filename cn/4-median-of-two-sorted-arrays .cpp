#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>v;
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        v.resize(nums1.size()+nums2.size());
        std::copy(nums1.begin(), nums1.end(),v.begin());
        std::copy(nums2.begin(), nums2.end(),v.begin()+nums1.size());
        std::sort(v.begin(), v.end());
        if (v.size()&1)
            return v[v.size()/2];
        else
            return (double)(v[v.size()/2]+v[v.size()/2-1])/2.0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}