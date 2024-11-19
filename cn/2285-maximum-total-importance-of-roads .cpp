#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        ll ans=0;
        vector<int>deg(n);
        for (auto &i: roads){
            deg[i[1]]++;
            deg[i[0]]++;
        }
        sort(deg.begin(), deg.end());
        for (ll i = 0; i < n; ++i) {
            ans+=(i+1)*deg[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}