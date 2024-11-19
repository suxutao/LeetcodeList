#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<pair<int,int>>vp(strs.size());
        vector<vector<int>>ans(m+1,vector<int>(n+1,0));
        int zero,one;
        for (int i = 0; i < strs.size(); ++i) {
            zero=one=0;
            for (const auto &item: strs[i]){
                if (item=='0')
                    zero++;
                else
                    one++;
            }
            vp[i]= make_pair(zero,one);
        }
        for (auto&p:vp) {
            for (int i = m; i >= p.first; --i) {
                for (int j = n; j >= p.second; --j) {
                    ans[i][j]= max(ans[i][j],1+ans[i-p.first][j-p.second]);
                }
            }
        }
        return ans[m][n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}