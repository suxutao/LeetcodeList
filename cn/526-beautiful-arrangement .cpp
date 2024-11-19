#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>>v;
    vector<bool>vis;
    int n,ans=0;
    void dfs(int pos){
        if (pos==n+1){
            ans++;
            return;
        }
        for (int i:v[pos]) {
            if (!vis[i]){
                vis[i]=1;
                dfs(pos+1);
                vis[i]=0;
            }
        }
    }
    int countArrangement(int n) {
        Solution::n=n;
        v.resize(n+1);
        vis.assign(n+1,0);
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (i%j==0||j%i==0)
                    v[i].push_back(j);
            }
        }
        dfs(1);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}