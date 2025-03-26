#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int leastBricks(vector<vector<int>>& wall) {
        int n=wall.size(),ans=0;
        unordered_map<ll,int>m;
        for (int i = 0; i < n; ++i) {
            ll sum=0;
            for (int j = 0; j < wall[i].size() - 1; ++j) {
                sum+=wall[i][j];
                ++m[sum];
            }
        }
        for (auto &[_,cnt]: m){
            ans= max(ans,cnt);
        }
        return n-ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}