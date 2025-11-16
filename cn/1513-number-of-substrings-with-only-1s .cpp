#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    int numSub(string s) {
        int n=s.size();
        long long cnt=0,ans=0;
        for (int i = 0; i < n; ++i) {
            if (s[i]=='1'){
                cnt++;
                ans=(ans+cnt)%N;
            }else{
                cnt=0;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}