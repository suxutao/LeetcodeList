#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int finish;
    vector<vector<int>>f;
    ll dfs(vector<int>&l,int pos,int fuel){
        if (fuel<0)
            return 0;
        if (fuel==0)
            return pos==finish;
        if (abs(l[finish]-l[pos])>fuel)
            return 0;
        if (f[pos][fuel])
            return f[pos][fuel];
        ll temp=pos==finish;
        for (int i = 0; i < l.size(); ++i) {
            if (i==pos)
                continue;
            temp+=dfs(l,i,fuel-abs(l[i]-l[pos]));
        }
        return f[pos][fuel]=(temp%N);
    }
    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        this->finish=finish;
        f.assign(locations.size(),vector<int>(fuel+1));
        return dfs(locations,start,fuel);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}