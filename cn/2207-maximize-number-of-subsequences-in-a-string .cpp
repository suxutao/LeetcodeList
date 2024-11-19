#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    ll cal(string&s,string&p){
        ll ans=0,zero=0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]==p[1])
                ans+=zero;
            if (s[i]==p[0])
                zero++;
        }
        return ans;
    }
    long long maximumSubsequenceCount(string text, string pattern) {
        string s1=text+pattern[1],s2=pattern[0]+text;
        return max(cal(s1,pattern),cal(s2,pattern));
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}