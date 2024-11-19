#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii = pair<int, int>;
    int minTaps(int n, vector<int>& ranges) {
        vector<pii>v(n+1);
        for (int i = 0; i <= n; ++i) {
            v[i]={max(0,i-ranges[i]), min(n,i+ranges[i])};
        }
        sort(v.begin(), v.end(),[&](pii&a,pii&b){
            if (a.first==b.first)
                return a.second>b.second;
            return a.first<b.first;
        });
        int r=v[0].second,ans=1;
        for (int i = 1; i <= n;) {
            if (r>=n)
                break;
            int you=0;
            for (; i <= n&&r>=v[i].first; ++i) {
                you= max(you,v[i].second);
            }
            if (!you) return -1;
            r=you;++ans;
        }
        return r>=n?ans:-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}