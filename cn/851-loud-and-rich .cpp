#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>G[505];
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        int n=quiet.size();
        for (auto &i: richer){
            G[i[1]].push_back(i[0]);
        }
        vector<int>v(n,INT_MAX);
        function<int(int)> dfs=[&](int x){
            if (v[x]!=INT_MAX)
                return v[x];
            int ans=x,MIN=quiet[x];
            for (auto &i: G[x]){
                int t=dfs(i);
                int a=t>>16,b=t<<16>>16;
                if (a<MIN){
                    ans=b;
                    MIN=a;
                }
            }
            return v[x]=MIN<<16|ans;
        };
        for (int i = 0; i < n; ++i) {
            if (v[i]==INT_MAX)
                dfs(i);
        }
        for (int i = 0; i < n; ++i) {
            v[i]=v[i]<<16>>16;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}