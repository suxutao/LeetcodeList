#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>v(m-k+1,vector<int>(n-k+1,INT_MAX));
        for (int i = 0; i < m - k + 1; ++i) {
            for (int j = 0; j < n - k + 1; ++j) {
                vector<int>t;
                for (int l = 0; l < k; ++l) {
                    for (int i1 = 0; i1 < k; ++i1) {
                        t.push_back(grid[l+i][i1+j]);
                    }
                }
                std::sort(t.begin(), t.end());
                if (t.front()==t.back()||t.size()==1)
                    v[i][j]=0;
                else{
                    for (int l = 0; l < t.size() - 1; ++l) {
                        if (t[l+1]!=t[l])
                            v[i][j]= min(v[i][j],t[l+1]-t[l]);
                    }
                }
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}