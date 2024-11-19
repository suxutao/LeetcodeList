#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n=edges.size(),MIN=n,ans=-1;
        function<vector<int>(int)> dfs=[&](int x){
            vector<int>v(n,n);
            vector<bool>vis(n);
            int cnt=1;v[x]=0;vis[x]=1;
            while (~edges[x]&&!vis[edges[x]]){
                vis[edges[x]]=1;
                v[edges[x]]=cnt++;
                x=edges[x];
            }
            return v;
        };
        auto a=dfs(node1),b=dfs(node2);
        for (int i = 0; i < n; ++i) {
            int t= max(a[i],b[i]);
            if (t<MIN){
                MIN=t;
                ans=i;
            }else if (t==MIN){
                ans= min(ans,i);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}