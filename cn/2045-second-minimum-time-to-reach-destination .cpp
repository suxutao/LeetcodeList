#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int secondMinimum(int n, vector<vector<int>>& edges, int time, int change) {
        vector<vector<int>>g(n+1);
        for (auto &i: edges){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        vector<vector<int>>path(n+1,vector<int>(2,INT_MAX));
        path[1][0]=0;
        queue<pair<int,int>>q;
        q.emplace(1,0);
        while (path[n][1]==INT_MAX){
            auto [a,b]=q.front();
            q.pop();
            for (auto &i: g[a]){
                if (b+1<path[i][0]){
                    path[i][0]=b+1;
                    q.emplace(i,b+1);
                }else if (b+1>path[i][0]&&b+1<path[i][1]){
                    path[i][1]=b+1;
                    q.emplace(i,b+1);
                }
            }
        }
        int ans=0;
        for (int i = 0; i < path[n][1]; ++i) {
            if (ans%(change*2)>=change)
                ans+=change*2-ans%(change*2);
            ans+=time;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}