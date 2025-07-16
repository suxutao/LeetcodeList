#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int n=nums.size(),a1=0,a2=0,a3=1;
        for (int i = 0; i < n; ++i) {
            nums[i]%=2;
            if (nums[i]==1)
                a1++;
            else
                a2++;
        }
        for (int i = 1; i < n; ++i) {
            if (nums[i]!=nums[i-1]){
                a3++;
            }
        }
        return max({a1,a2,a3});
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}