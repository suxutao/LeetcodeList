#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isPossible(int n, vector<vector<int>>& edges) {
        vector<vector<int>>g(n+1);
        vector<int>deg(n+1);
        for (auto &i: edges){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
            ++deg[i[0]];++deg[i[1]];
        }
        vector<int>ji;
        for (int i = 1; i <= n; ++i) {
            if (deg[i]&1){
                ji.push_back(i);
            }
        }
        if (ji.size()>4||ji.size()&1)
            return false;
        if (ji.empty())
            return true;
        if (ji.size()==2){
            if (find(g[ji[0]].begin(), g[ji[0]].end(),ji[1])==g[ji[0]].end())
                return true;
            unordered_set<int>s(g[ji[0]].begin(),g[ji[0]].end());
            for (auto &i: g[ji[1]]){
                s.insert(i);
            }
            for (int i = 1; i <= n; ++i) {
                if (!s.contains(i))
                    return true;
            }
            return false;
        }else{
            for (int i = 0; i < 4; ++i) {
                for (int j = i+1; j < 4; ++j) {
                    for (int k = 0; k < 4; ++k) {
                        if (k==i||k==j)
                            continue;
                        for (int l = k+1; l < 4; ++l) {
                            if (l==i||l==j)
                                continue;
                            if (find(g[ji[i]].begin(), g[ji[i]].end(),ji[j])==g[ji[i]].end()&&find(g[ji[k]].begin(), g[ji[k]].end(),ji[l])==g[ji[k]].end())
                                return true;
                        }
                    }
                }
            }
            return false;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}