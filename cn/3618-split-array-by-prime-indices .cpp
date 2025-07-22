#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    bool pan(int x){
        if (x==1||x==0)
            return false;
        for (int i = 2; i <= sqrt(x); ++i) {
            if (x%i==0)
                return false;
        }
        return true;
    }
    long long splitArray(vector<int>& nums) {
        ll ans=0,n=nums.size();
        for (int i = 0; i < n; ++i) {
            if (pan(i))
                ans+=nums[i];
            else
                ans-=nums[i];
        }
        return abs(ans);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}