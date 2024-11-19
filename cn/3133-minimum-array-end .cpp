#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long minEnd(int n, int x) {
        vector<int>pos;ll ans=x,N=n-1;
        for (int i = 0; i < 64; ++i) {
            if (!((ans>>i)&1))
                pos.push_back(i);
        }
        vector<bool>v(pos.size());
        for (int i = 0; i < pos.size(); ++i) {
            if ((N>>i)&1)
                v[i]=1;
        }
        for (int i = 0; i < pos.size(); ++i) {
            if (v[i]){
                ans+=1ll<<pos[i];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}