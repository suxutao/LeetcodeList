#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    int colorTheGrid(int m, int n) {
        unordered_map<int,vector<int>>valid;
        ll end=pow(3,m),ans=0;
        for (int i = 0; i < end; ++i) {
            vector<int>color;
            int temp=i;
            for (int j = 0; j < m; ++j) {
                color.push_back(temp%3);
                temp/=3;
            }
            bool va= true;
            for (int j = 0; j < m - 1; ++j) {
                if (color[j]==color[j+1]){
                    va= false;
                    break;
                }
            }
            if (va)
                valid[i]=move(color);
        }
        unordered_map<int,vector<int>>adjacent;
        for (auto &[a,b]: valid){
            for (auto &[c,d]: valid){
                bool va= true;
                for (int i = 0; i < m; ++i) {
                    if (b[i]==d[i]){
                        va= false;
                        break;
                    }
                }
                if (va)
                    adjacent[a].push_back(c);
            }
        }
        vector<int>dp(end);
        for (auto &[a,_]: valid){
            dp[a]=1;
        }
        for (int i = 1; i < n; ++i) {
            vector<int>temp(end);
            for (auto &[a,b]: valid){
                for (auto &j: adjacent[a]){
                    temp[a]=(temp[a]+dp[j])%N;
                }
            }
            dp=move(temp);
        }
        for (auto &i: dp){
            ans=(ans+i)%N;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}