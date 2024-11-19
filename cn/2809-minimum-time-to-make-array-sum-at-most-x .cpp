#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumTime(vector<int>& nums1, vector<int>& nums2, int x) {
        int sum=0,ans=0,MAX;
        for (int i = 0; i < nums2.size(); ++i) {
            sum+=nums2[i];
        }
        MAX= *std::max_element(nums1.begin(), nums1.end());

    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}