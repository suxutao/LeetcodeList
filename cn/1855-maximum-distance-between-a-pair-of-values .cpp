#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int ans=0;
        for (int i = 0; i < nums1.size(); ++i) {
            int pos= nums2.rend()-lower_bound(nums2.rbegin(), nums2.rend(),nums1[i]);
            ans= max<int>(ans,pos-i-1);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}