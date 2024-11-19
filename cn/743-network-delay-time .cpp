#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii = pair<int, int>;
    vector<pii>G[103];
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        for (auto &i: times){
            G[i[0]].emplace_back(i[1],i[2]);
        }
        priority_queue<pii,vector<pii>,greater<>>q;
        vector<int>dis(n+1,INT_MAX);
        dis[k]=0;
        q.emplace(0,k);
        while (!q.empty()){
            auto [di,a]=q.top();
            q.pop();
            if (di>dis[a])
                continue;
            for (auto &[x,y]: G[a]){
                int new_dis=di+y;
                if (new_dis<dis[x]){
                    dis[x]=new_dis;
                    q.emplace(dis[x],x);
                }
            }
        }
        int mx=*max_element(dis.begin()+1, dis.end());
        return mx==INT_MAX?-1:mx;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}