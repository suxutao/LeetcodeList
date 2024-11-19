#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int numWays(string s) {
        int cnt=count(s.begin(), s.end(),'1');
        if (cnt==0)
            return (ll)(s.size()-1)*(s.size()-2)/2%N;
        if (cnt%3)
            return 0;
        ll a=cnt/3,b=a*2,cou=0,pos1,pos2,c=1,d=1;
        for (pos1 = 0; cou < a; ++pos1) {
            cou+=s[pos1]=='1';
        }
        cou=0;
        for (pos2 = 0; cou < b; ++pos2) {
            cou+=s[pos2]=='1';
        }
        for (; s[pos1]!='1'; ++pos1) {
            c++;
        }
        for (; s[pos2]!='1'; ++pos2) {
            d++;
        }
        return c*d%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().numWays("10101");
    return 0;
}