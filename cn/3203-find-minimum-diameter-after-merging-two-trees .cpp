#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int n,m;
    vector<vector<int>>g1,g2;
    int a=0,b=0;
    int dfs(vector<vector<int>>&g,int&ans,int u,int fa){
        if (u&&g[u].size()==1)
            return 1;
        int mn=0,len;
        for (auto &i: g[u]){
            if (i==fa)
                continue;
            len=dfs(g,ans,i,u);
            ans=max(ans,len+mn);
            mn= max(mn,len);
        }
        return mn+1;
    }
    int minimumDiameterAfterMerge(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {
        n=edges1.size()+1;m=edges2.size()+1;
        g1.resize(n);
        g2.resize(m);
        for (auto &i: edges1){
            g1[i[0]].push_back(i[1]);
            g1[i[1]].push_back(i[0]);
        }
        for (auto &i: edges2){
            g2[i[0]].push_back(i[1]);
            g2[i[1]].push_back(i[0]);
        }
        if (!edges1.empty())
            dfs(g1,a,0,0);
        if (!edges2.empty())
            dfs(g2,b,0,0);
        return max(max(a,b),(a+1)/2+(b+1)/2+1);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}