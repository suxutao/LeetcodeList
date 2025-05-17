#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool hasValidPath(vector<vector<char>>& grid) {
        int m=grid.size(),n=grid[0].size();
        if ((m+n)%2==0)
            return false;
        if (grid.back().back()=='(')
            return false;
        vector<vector<unordered_set<int>>>dp(m,vector<unordered_set<int>>(n));
        dp[0][0]={grid[0][0]=='('?1:-1};
        for (int j = 1; j < n; ++j) {
            if (grid[0][j]=='('){
                for (auto &item: dp[0][j-1])
                    if (item>=0)
                        dp[0][j].insert(item+1);
            }else{
                for (auto &item: dp[0][j-1])
                    if (item>0)
                        dp[0][j].insert(item-1);
            }
        }
        for (int i = 1; i < m; ++i) {
            if (grid[i][0]=='('){
                for (auto &item: dp[i-1][0])
                    if (item>=0)
                        dp[i][0].insert(item+1);
            }else{
                for (auto &item: dp[i-1][0])
                    if (item>0)
                        dp[i][0].insert(item-1);
            }
        }
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                if (grid[i][j]=='('){
                    for (auto &item: dp[i-1][j])
                        if (item>=0)
                            dp[i][j].insert(item+1);
                    for (auto &item: dp[i][j-1])
                        if (item>=0)
                            dp[i][j].insert(item+1);
                }else{
                    for (auto &item: dp[i-1][j])
                        if (item>0)
                            dp[i][j].insert(item-1);
                    for (auto &item: dp[i][j-1])
                        if (item>0)
                            dp[i][j].insert(item-1);
                }
            }
        }
        return dp[m-1][n-1].contains(0);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}