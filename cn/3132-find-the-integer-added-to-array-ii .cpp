#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n=nums1.size(),ans=INT_MAX;
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                int k,p=0,cha=-(i?nums1[0]-nums2[0]:j==1?nums1[2]-nums2[0]:nums1[1]-nums2[0]);
                for (k = 0; k < n; ++k) {
                    if (k==i||k==j)
                        continue;
                    if (cha!=-nums1[k]+nums2[p++])
                        break;
                }
                if (k==n)
                    ans= min(ans,cha);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}