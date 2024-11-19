#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int a=*std::min_element(nums1.begin(), nums1.end());
        int b=*std::min_element(nums2.begin(), nums2.end());
        return b-a;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}