#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    using pii = pair<double, ll>;
    long long minDamage(int power, vector<int>& damage, vector<int>& health) {
        ll n=damage.size(),sum=0,ans=0;
        vector<pii>v(n);
        for (int i = 0; i < n; ++i) {
            v[i]={damage[i],ceil(health[i]/(double)power)};
            sum+=damage[i];
        }
        std::sort(v.begin(), v.end(),[&](pii&a,pii&b){
            return a.first/a.second>b.first/b.second;
        });
        for (int i = 0; i < n; ++i) {
            ans+=sum*v[i].second;
            sum-=v[i].first;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}