#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    vector<ll>v;
    long long minimumSteps(string s) {
        ll ans=0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]=='0'){
                v.push_back(i);
            }
        }
        for (int i = 0; i < v.size(); ++i) {
            ans+=v[i]-i;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}