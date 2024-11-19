#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        vector<vector<int>>g(n);
        int ans=0;
        for (auto &i: edges){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        function<long long(int,int)> dfs=[&](int u,int fa)->long long{
            if (u&&g[u].size()==1){
                if (values[u]%k==0) {
                    ans++;
                    return 0;
                }else
                    return values[u];
            }
            long long sum=values[u];
            for (auto &i: g[u]){
                if (i==fa)
                    continue;
                sum+=dfs(i,u);
            }
            if (sum%k==0){
                ans++;
                return 0;
            }else{
                return sum;
            }
        };
        dfs(0,0);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}