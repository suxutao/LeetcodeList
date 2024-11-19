#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long putMarbles(vector<int>& weights, int k) {
        ll a=0,b=0;
        vector<ll>v;
        for (int i = 0; i < weights.size() - 1; ++i) {
            v.push_back(weights[i]+weights[i+1]);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < k-1; ++i) {
            a+=v[i];
            b+=v[v.size()-i-1];
        }
        return b-a;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}