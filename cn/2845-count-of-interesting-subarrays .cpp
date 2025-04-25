#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        ll ans=0,n=nums.size(),sum=0,t;
        unordered_map<int,int>m;
        m[0]=1;
        for (int i = 0; i < n; ++i) {
            nums[i]%=modulo;
            sum+=nums[i]==k;
            t=sum%modulo;
            ans+=m[(t-k+modulo)%modulo];
            ++m[t];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}