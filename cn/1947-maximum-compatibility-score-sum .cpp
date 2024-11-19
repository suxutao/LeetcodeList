#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxCompatibilitySum(vector<vector<int>>& students, vector<vector<int>>& mentors) {
        int n=students[0].size(),m=students.size();
        vector<vector<int>>g(m,vector<int>(m));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < m; ++j) {
                for (int k = 0; k < n; ++k) {
                    g[i][j]+=students[i][k]==mentors[j][k];
                }
            }
        }
        vector<int>pre;
        for (int i = 0; i < m; ++i) {
            pre.push_back(i);
        }
        int ans=0,sum;
        do {
            sum=0;
            for (int i = 0; i < m; ++i) {
                sum+=g[i][pre[i]];
            }
            ans= max(ans,sum);
        } while (next_permutation(pre.begin(),pre.end()));
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}