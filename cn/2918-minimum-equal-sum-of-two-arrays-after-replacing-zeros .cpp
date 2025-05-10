#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        ll n1=nums1.size(),n2=nums2.size(),sum1=0,sum2=0,b1=0,b2=0;
        for (int i = 0; i < n1; ++i) {
            if (nums1[i])
                sum1+=nums1[i];
            else
                b1++;
        }
        for (int i = 0; i < n2; ++i) {
            if (nums2[i])
                sum2+=nums2[i];
            else
                b2++;
        }
        if (!b1&&!b2){
            return sum1==sum2?sum1:-1;
        }else if (!b1||!b2){
            if (!b2)
                return sum1+b1>sum2?-1:sum2;
            else
                return sum2+b2>sum1?-1:sum1;
        }else{
            return max(sum1+b1,sum2+b2);
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}