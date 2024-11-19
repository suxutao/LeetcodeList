#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    double eps=1e-7;
    int minSkips(vector<int>& dist, int speed, int hoursBefore) {
        int n=dist.size();
        vector<vector<double>>v(n+1,vector<double>(n+1,INT_MAX));
        for (int i = 0; i <= n; ++i) {
            v[0][i]=0;
        }
        for (int i = 1; i <= n; ++i) {
            v[i][0]=ceil(v[i-1][0]+(double)dist[i-1]/speed-eps);
        }
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                v[i][j]= min(ceil(v[i-1][j]+(double)dist[i-1]/speed-eps),v[i-1][j-1]+(double)dist[i-1]/speed);
            }
        }
        for (int i = 0; i <= n; ++i) {
            if (v[n][i]<=hoursBefore)
                return i;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}