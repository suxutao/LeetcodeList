#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int numOfSubarrays(vector<int>& arr) {
        ll ans=0,qi=0,ou=1,sum=0;
        for (auto &i: arr){
            sum+=i;
            if (sum&1){
                ++qi;
                ans+=ou;
            }else{
                ++ou;
                ans+=qi;
            }
        }
        return ans%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}