#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maxScore(vector<int>& a, vector<int>& b) {
        int n=b.size();
        vector<array<ll,5>>v(n+1);
        for (int i = 1; i <= 4; ++i) {
            v[0][i]=LLONG_MIN/2;
        }
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= 4; ++j) {
                v[i][j]= max(v[i-1][j],(ll)b[i-1]*a[j-1]+v[i-1][j-1]);
            }
        }
        return v[n][4];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}