#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool pan(int x){
        if (x==1)
            return false;
        for (int i = 2; i <= sqrt(x); ++i) {
            if (x%i==0)
                return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int n=nums.size(),ans=0;
        for (int i = 0; i < n; ++i) {
            if (pan(nums[i][i]))
                ans= max(ans,nums[i][i]);
            if (pan(nums[i][n-i-1]))
                ans= max(ans,nums[i][n-i-1]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}