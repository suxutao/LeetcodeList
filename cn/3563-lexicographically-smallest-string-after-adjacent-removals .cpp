#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool pan(char x,char y){
        int dis= abs(x-y);
        return dis==1||dis==25;
    }
    string lexicographicallySmallestString(string s) {
        int n=s.size();
        vector<string>dp(n+1);
        vector<vector<bool>>v(n,vector<bool>(n));
        for (int i = 0; i < n - 1; ++i) {
            if (pan(s[i],s[i+1]))
                v[i][i+1]=1;
        }
        for (int l = 3; l <= n; ++l) {
            for (int i = 0; i <= n - l; ++i) {
                int j=i+l-1;
                if (pan(s[i],s[j]))
                    v[i][j]=v[i+1][j-1];
                for (int k = i+1; k < j; ++k) {
                    if (v[i][k]&&v[k+1][j])
                        v[i][j]=1;
                }
            }
        }
        for (int i = n - 1; i >= 0; --i) {
            dp[i]=s[i]+dp[i+1];
            for (int j = i+1; j < n; ++j) {
                if (v[i][j])
                    dp[i]= min(dp[i],dp[j+1]);
            }
        }
        return dp[0];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}