#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestPath(vector<int>& parent, string s) {
        int n=parent.size(),ans=1;
        vector<vector<int>>g(n);
        for (int i = 1; i < n; ++i) {
            g[parent[i]].push_back(i);
        }
        auto dfs=[&](auto&&dfs,int u)->int{
            int l1=0,l2;
            for (auto &i: g[u]){
                l2=dfs(dfs,i)+1;
                if (s[i]!=s[u]){
                    ans= max(ans,l2+l1+1);
                    l1= max(l1,l2);
                }
            }
            return l1;
        };
        dfs(dfs,0);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}