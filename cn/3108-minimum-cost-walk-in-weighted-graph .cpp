#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>fa,an,ans;
    int find_set(int x){
        return fa[x]==x?x:fa[x]= find_set(fa[x]);
    }
    vector<int> minimumCost(int n, vector<vector<int>>& edges, vector<vector<int>>& query) {
        fa.resize(n);an.assign(n,-1);ans.resize(query.size());
        for (int i = 0; i < n; ++i) {
            fa[i]=i;
        }
        for (auto &e: edges) {
            int x = find_set(e[0]);
            int y = find_set(e[1]);
            an[y] &= e[2];
            if (x != y) {
                an[y] &= an[x];
                fa[x] = y;
            }
        }
        for (int i = 0; i < query.size(); ++i) {
            ans[i]=find_set(query[i][0])== find_set(query[i][1])?an[find_set(query[i][0])]:-1;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}