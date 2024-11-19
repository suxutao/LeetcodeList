#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumMoves(vector<vector<int>>& grid) {
        vector<pair<int,int>>from,to;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (grid[i][j]==0)
                    to.emplace_back(i,j);
                if (grid[i][j]>1){
                    for (int k = 1; k < grid[i][j]; ++k) {
                        from.emplace_back(i,j);
                    }
                }
            }
        }
        int ans=INT_MAX;
        do {
            int t=0;
            for (int i = 0; i < to.size(); ++i) {
                t+= abs(from[i].first-to[i].first)+ abs(from[i].second-to[i].second);
            }
            ans= min(ans,t);
        } while (next_permutation(from.begin(),from.end()));
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}