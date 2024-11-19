#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<set<int>>vv;
    vector<vector<int>>v;
    vector<int>G[1005];
    int ru[1005]={};
    queue<int>q;
    void bian(){
        while (!q.empty()){
            int f=q.front();q.pop();
            for (auto &i: G[f]){
                ru[i]--;
                set_union(vv[f].begin(), vv[f].end(), vv[i].begin(), vv[i].end(), inserter(vv[i], vv[i].begin()));
                vv[i].insert(f);
                if (!ru[i]) {
                    q.emplace(i);
                }
            }
        }
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vv.assign(n,{});v.resize(n);
        for (auto &item: edges){
            G[item[0]].emplace_back(item[1]);
            ru[item[1]]++;
        }
        for (int i = 0; i < n; ++i) {
            if (!ru[i]){
                q.emplace(i);
            }
        }
        bian();
        for (int i = 0; i < n; ++i) {
            v[i].assign(vv[i].begin(),vv[i].end());
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}