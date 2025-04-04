#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii = pair<int, int>;
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {
        int n=arrival.size(),mx=0;
        set<int>s;
        vector<int>v(k),ans;
        priority_queue<pii,vector<pii>,greater<>>q;
        for (int i = 0; i < k; ++i) {
            s.insert(i);
        }
        for (int i = 0; i < n; ++i) {
            while (!q.empty()&&q.top().first<=arrival[i]){
                s.insert(q.top().second);
                q.pop();
            }
            if (s.empty())
                continue;
            auto it=s.lower_bound(i%k);
            if (it==s.end())
                it=s.begin();
            ++v[*it];
            q.emplace(arrival[i]+load[i],*it);
            s.erase(*it);
        }
        for (int i = 0; i < k; ++i) {
            if (v[i]>mx){
                mx=v[i];
                ans.clear();
                ans.push_back(i);
            }else if (v[i]==mx){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}