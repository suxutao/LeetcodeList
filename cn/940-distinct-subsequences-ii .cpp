#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    int distinctSubseqII(string s) {
        ll n=s.size(),arr[26]{};
        for (int i = 0; i < n; ++i) {
            ll sum= accumulate(arr,arr+26,0ll);
            arr[s[i]-'a']=(1+sum)%N;
        }
        return accumulate(arr,arr+26,0ll)%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}