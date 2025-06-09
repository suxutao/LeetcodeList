#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>G[1005];
    int findShortestCycle(int n, vector<vector<int>>& edges) {
        int ans=INT_MAX;
        for (auto &i: edges){
            G[i[0]].push_back(i[1]);
            G[i[1]].push_back(i[0]);
        }
        for (int i = 0; i < n; ++i) {
            queue<pair<int,int>>q;
            q.emplace(i,-1);
            vector<int>v(n,-1);
            v[i]=0;
            while (!q.empty()){
                int sz=q.size();
                for (int j = 0; j < sz; ++j) {
                    auto [x,y]=q.front();q.pop();
                    for (auto &k: G[x]){
                        if (k==y)
                            continue;
                        if (v[k]==-1){
                            v[k]=v[x]+1;
                            q.emplace(k,x);
                        }else{
                            ans= min(ans,v[k]+v[x]+1);
                        }
                    }
                }
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v{{0,1},{0,2}};
    Solution().findShortestCycle(4,v);
    return 0;
}