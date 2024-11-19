#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size(),a=1,b=1,A=1,B=1;
        for (int i = 1; i < n; ++i) {
            if (nums[i]>nums[i-1]){
                ++A;
            }else{
                a= max(A,a);
                A=1;
            }
        }
        for (int i = 1; i < n; ++i) {
            if (nums[i]<nums[i-1]){
                ++B;
            }else{
                b= max(b,B);
                B=1;
            }
        }
        return max(max(a,A), max(B,b));
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}