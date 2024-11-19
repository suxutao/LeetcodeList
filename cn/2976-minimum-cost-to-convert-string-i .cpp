#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        vector<vector<ll>>g(26,vector<ll>(26,LLONG_MAX/2));
        int n=original.size(),m=source.size();
        ll ans=0;
        for (int i = 0; i < 26; ++i) {
            g[i][i]=0;
        }
        for (int i = 0; i < n; ++i) {
            g[original[i]-'a'][changed[i]-'a']=min<ll>(cost[i],g[original[i]-'a'][changed[i]-'a']);
        }
        for (int k = 0; k < 26; ++k) {
            for (int i = 0; i < 26; ++i) {
                for (int j = 0; j < 26; ++j) {
                    g[i][j]= min(g[i][j],g[i][k]+g[k][j]);
                }
            }
        }
        for (int i = 0; i < m; ++i) {
            if (g[source[i]-'a'][target[i]-'a']==LLONG_MAX/2)
                return -1;
            ans+=g[source[i]-'a'][target[i]-'a'];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}