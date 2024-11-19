#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minCost(vector<vector<int>>& costs) {
        int n=costs.size();
        vector<vector<int>>v(n,vector<int>(3));
        for (int i = 0; i < 3; ++i) {
            v[0][i]=costs[0][i];
        }
        for (int i = 1; i < n; ++i) {
            v[i][0]= min(v[i-1][1],v[i-1][2])+costs[i][0];
            v[i][1]= min(v[i-1][0],v[i-1][2])+costs[i][1];
            v[i][2]= min(v[i-1][1],v[i-1][0])+costs[i][2];
        }
        return *std::min_element(v[n - 1].begin(), v[n - 1].end());
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}