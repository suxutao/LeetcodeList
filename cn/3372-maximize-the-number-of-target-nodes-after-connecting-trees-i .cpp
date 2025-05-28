#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> maxTargetNodes(vector<vector<int>>& edges1, vector<vector<int>>& edges2, int k) {
        int m=edges1.size()+1,n=edges2.size()+1;
        vector<vector<int>>g1(m),g2(n);
        vector<int>deg1(m),deg2(n);
        if (k==0)
            return vector<int>(m,1);
        for (auto &i: edges1){
            g1[i[0]].push_back(i[1]);
            g1[i[1]].push_back(i[0]);
        }
        for (auto &i: edges2){
            g2[i[0]].push_back(i[1]);
            g2[i[1]].push_back(i[0]);
        }
        for (int i = 0; i < m; ++i) {
            vector<bool>vis(m);
            queue<pair<int,int>>q;
            q.emplace(i,0);
            vis[i]=1;
            while (!q.empty()){
                auto&[x,y]=q.front();
                deg1[x]++;
                for (auto &j: g1[x]){
                    if (!vis[j]){
                        vis[j]=1;
                        if (y+1<=k)
                            q.emplace(j,y+1);
                    }
                }
                q.pop();
            }
        }
        for (int i = 0; i < n; ++i) {
            vector<bool>vis(n);
            queue<pair<int,int>>q;
            q.emplace(i,0);
            vis[i]=1;
            while (!q.empty()){
                auto&[x,y]=q.front();
                deg2[x]++;
                for (auto &j: g2[x]){
                    if (!vis[j]){
                        vis[j]=1;
                        if (y+1<=k-1)
                            q.emplace(j,y+1);
                    }
                }
                q.pop();
            }
        }
        int mx=ranges::max(deg2);
        for (int i = 0; i < m; ++i) {
            deg1[i]+=mx;
        }
        return deg1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}