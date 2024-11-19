#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>>g;
    int dfs(int u,int fa,vector<bool>&has){
        if (g[u].size()==1&&u){
            return has[u]?2:0;
        }
        int temp=0;
        for (auto &i: g[u]){
            if (i==fa)
                continue;
            temp+=dfs(i,u,has);
        }
        if (temp)
            return temp+2;
        else
            return has[u]?2:0;
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        if (n==1)
            return 0;
        g.resize(n);
        for (auto &i: edges){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        int ans=dfs(0,-1,hasApple);
        return ans?ans-2:0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>ed{{0,1},{1,2},{2,3},{1,4},{2,5},{2,6},{4,7}};
    vector<bool>v={true,true,false,true,false,true,true,false};
    Solution().minTime(8,ed,v);
    return 0;
}