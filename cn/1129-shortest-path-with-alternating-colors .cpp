#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>red[105],blue[105];
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        vector<int>v(n,INT_MAX);
        unordered_set<int>s;
        int b=0,r=1,sum=redEdges.size()+blueEdges.size();
        for (auto &i: redEdges){
            red[i[0]].push_back(i[1]);
        }
        for (auto &i: blueEdges){
            blue[i[0]].push_back(i[1]);
        }
        queue<int>p,q;
        q.push(0),p.push(0);
        while (!q.empty()&&r<=sum+1){
            int sz=q.size();
            if (r&1){
                for (int i = 0; i < sz; ++i) {
                    int t=q.front();q.pop();
                    v[t]=min(v[t],r-1);
                    for (auto &item: red[t]){
                        if (!s.contains(t<<16|item<<1|1)){
                            s.insert(t<<16|item<<1|1);
                            q.push(item);
                        }
                    }
                }
            }else{
                for (int i = 0; i < sz; ++i) {
                    int t=q.front();q.pop();
                    v[t]=min(v[t],r-1);
                    for (auto &item: blue[t]){
                        if (!s.contains(t<<16|item<<1)){
                            s.insert(t<<16|item<<1);
                            q.push(item);
                        }
                    }
                }
            }
            ++r;
        }
        s.clear();
        while (!p.empty()&&b<=sum){
            int sz=p.size();
            if (b&1){
                for (int i = 0; i < sz; ++i) {
                    int t=p.front();p.pop();
                    v[t]= min(v[t],b);
                    for (auto &item: red[t]){
                        if (!s.contains(t<<16|item<<1|1)){
                            s.insert(t<<16|item<<1|1);
                            p.push(item);
                        }
                    }
                }
            }else{
                for (int i = 0; i < sz; ++i) {
                    int t=p.front();p.pop();
                    v[t]= min(v[t],b);
                    for (auto &item: blue[t]){
                        p.push(item);if (!s.contains(t<<16|item<<1)){
                            s.insert(t<<16|item<<1);
                            p.push(item);
                        }
                    }
                }
            }
            ++b;
        }
        replace(v.begin(), v.end(),INT_MAX,-1);
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v1{},v2{{0,1},{1,2}};
    Solution().shortestAlternatingPaths(3,v1,v2);
    return 0;
}