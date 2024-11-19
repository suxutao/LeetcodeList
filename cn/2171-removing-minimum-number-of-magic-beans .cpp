#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    typedef long long ll;
    vector<ll>s;
    long long minimumRemoval(vector<int>& beans) {
        ll ans=LONG_LONG_MAX;
        std::sort(beans.begin(), beans.end());
        s.resize(beans.size());
        s[0]=beans[0];
        for (int i = 1; i < beans.size(); ++i) {
            s[i]=s[i-1]+(ll)beans[i];
        }
        for (int i = 0; i < beans.size(); ++i) {
            ans= min(ans,s[s.size()-1]-(ll)beans[i]*((ll)s.size()-i));
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}