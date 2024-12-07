#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long numberOfPowerfulInt(long long start, long long finish, int limit, string s) {
        string low=to_string(start),high=to_string(finish);
        int n=high.size(),diff=n-s.size();
        low=string(n-low.size(),'0')+low;
        vector<ll>v(n,-1);
        auto dfs=[&](auto&&dfs,ll i,bool lowLimit,bool highLimit)->ll{
            if (i==n)
                return 1;
            if (!lowLimit&&!highLimit&&~v[i])
                return v[i];
            ll ans=0;
            int down=lowLimit?low[i]-'0':0;
            int up=highLimit?high[i]-'0':9;
            if (i<diff){
                for (int j = down; j <= min(up, limit); ++j) {
                    ans+=dfs(dfs,i+1,lowLimit&&j==down,highLimit&&j==up);
                }
            }else{
                int j=s[i-diff]-'0';
                if (j>=down&&j<= min(up,limit))
                    ans=dfs(dfs,i+1,lowLimit&&j==down,highLimit&&j==up);
            }
            if (!lowLimit&&!highLimit)
                v[i]=ans;
            return ans;
        };
        return dfs(dfs,0,1,1);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}