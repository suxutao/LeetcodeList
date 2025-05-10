#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int mem[52][52][12]{};
    int minTravelTime(int l, int n, int k, vector<int>& position, vector<int>& time) {
        vector<int>pre(n);
        partial_sum(time.begin(),time.end()-1,pre.begin()+1);
        auto dfs=[&](auto&&dfs,int i,int j,int lk)->int{
            if (j==n-1)
                return lk?INT_MAX/2:0;
            int&ans=mem[i][j][lk];
            if (ans)
                return ans;
            ans=INT_MAX;
            int t=pre[j+1]-pre[i];
            for (int m = j+1; m < min(n, j + 2 + lk); ++m) {
                int r=dfs(dfs,j+1,m,lk-(m-j-1))+(position[m]-position[j])*t;
                ans= min(ans,r);
            }
            return ans;
        };
        return dfs(dfs,0,0,k);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}