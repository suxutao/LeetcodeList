#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    int countSpecialSubsequences(vector<int>& nums) {
        ll f0=0,f1=0,f2=0,n=nums.size();
        for (int i = 0; i < n; ++i) {
            if (nums[i]==0){
                f0=(f0*2+1)%N;
            }else if (nums[i]==1){
                f1=(f1*2+f0)%N;
            }else{
                f2=(f2*2+f1)%N;
            }
        }
        return f2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{0,1,2,2};
    Solution().countSpecialSubsequences(v);
    return 0;
}