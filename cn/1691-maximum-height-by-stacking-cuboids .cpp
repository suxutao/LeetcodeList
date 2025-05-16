#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxHeight(vector<vector<int>>& cuboids) {
        int n=cuboids.size(),ans=0;
        for (int i = 0; i < n; ++i) {
            ranges::sort(cuboids[i]);
        }
        ranges::sort(cuboids);
        vector<int>dp(n);
        int arr[6][3]{{0,1,2},{0,2,1},{1,2,0},{1,0,2},{2,0,1},{2,1,0}};
        for (int i = 0; i < n; ++i) {
            dp[i]=ranges::max(cuboids[i]);
            for (int j = i-1; j >= 0; --j) {
                for (auto &[a,b,c]: arr){
                    for (auto &[d,e,f]: arr){
                        if (cuboids[i][a]>=cuboids[j][d]&&cuboids[i][b]>=cuboids[j][e]&&cuboids[i][c]>=cuboids[j][f]){
                            dp[i]= max(dp[i],dp[j]+ranges::max(cuboids[i]));
                        }
                    }
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            ans= max(ans,dp[i]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v{{1,7,20},{2,6,20}};
    Solution().maxHeight(v);
    return 0;
}