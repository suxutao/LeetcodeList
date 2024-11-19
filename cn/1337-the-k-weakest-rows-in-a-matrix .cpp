#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m=mat.size(),n=mat[0].size();
        vector<int>v(k);
        vector<pair<int,int>>vp(m);
        for (int i = 0; i < m; ++i) {
            int cnt=0;
            for (int j = 0; j < n; ++j) {
                cnt+=mat[i][j];
            }
            vp[i]={cnt,i};
        }
        sort(vp.begin(), vp.end());
        for (int i = 0; i < k; ++i) {
            v[i]=vp[i].second;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}