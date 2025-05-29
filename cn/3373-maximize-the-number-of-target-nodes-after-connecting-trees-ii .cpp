#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> maxTargetNodes(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {
        int m=edges1.size()+1,n=edges2.size()+1;
        vector<vector<int>>g1(m),g2(n);
        vector<int>deg1(m),deg2(n);
        for (auto &i: edges1){
            g1[i[0]].push_back(i[1]);
            g1[i[1]].push_back(i[0]);
        }
        for (auto &i: edges2){
            g2[i[0]].push_back(i[1]);
            g2[i[1]].push_back(i[0]);
        }

        unordered_set<int> s,se;
        {
            vector<bool> vis(m);
            queue<pair<int, int>> q;
            q.emplace(0, 0);
            vis[0] = 1;
            while (!q.empty()) {
                auto &[x, y] = q.front();
                if (y&1)
                    s.insert(x);
                for (auto &j: g1[x]) {
                    if (!vis[j]) {
                        vis[j] = 1;
                        q.emplace(j, y + 1);
                    }
                }
                q.pop();
            }
        }
        {
            vector<bool> vis(n);
            queue<pair<int, int>> q;
            q.emplace(0, 0);
            vis[0] = 1;
            while (!q.empty()) {
                auto &[x, y] = q.front();
                if (y&1)
                    se.insert(x);
                for (auto &j: g2[x]) {
                    if (!vis[j]) {
                        vis[j] = 1;
                        q.emplace(j, y + 1);
                    }
                }
                q.pop();
            }
        }

        int mx= max(se.size(),n-se.size());
        for (int i = 0; i < m; ++i) {
            deg1[i]+=mx;
            if (s.contains(i)){
                deg1[i]+=s.size();
            }else{
                deg1[i]+=m-s.size();
            }
        }
        return deg1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}