#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int ans=0,n=costs.size()/2;
        std::sort(costs.begin(), costs.end(),[](vector<int>&a,vector<int>&b){
            return a[0]-a[1]< b[0]-b[1];
        });
        for (int i = 0; i < n; ++i) {
            ans+=costs[i][0];
        }
        for (int i = n; i < n * 2; ++i) {
            ans+=costs[i][1];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}