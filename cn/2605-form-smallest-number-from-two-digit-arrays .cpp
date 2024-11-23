#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        for (auto &i: nums1){
            ++m[i];
        }
        for (auto &i: nums2){
            --m[i];
        }
        for (auto &[a,b]: m){
            if (b==0)
                return a;
        }
        int a=ranges::min(nums1),b=ranges::min(nums2);
        return min(a*10+b,b*10+a);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}