#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<int,vector<int>>m,g;
    unordered_set<int>s;
    bool vis[505]{};
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        if (source==target)
            return 0;
        int cnt=1;
        queue<int>q;
        for (int i = 0; i < routes.size(); ++i) {
            for (auto &j: routes[i]){
                m[j].push_back(i);
                if(j==source) {
                    q.push(i);
                    vis[i]=1;
                }
                if (j==target){
                    s.insert(i);
                }
            }
        }
        for (auto &[a,b]: m){
            for (int i = 0; i < b.size(); ++i) {
                for (int j = i+1; j < b.size(); ++j) {
                    g[b[i]].push_back(b[j]);
                    g[b[j]].push_back(b[i]);
                }
            }
        }
        while (!q.empty()){
            int sz=q.size();
            for (int i = 0; i < sz; ++i) {
                int t=q.front();q.pop();
                if (s.contains(t))
                    return cnt;
                for (auto &j: g[t]){
                    if (!vis[j]){
                        vis[j]=1;
                        q.push(j);
                    }
                }
            }
            cnt++;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}