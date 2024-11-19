#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int stoneGameII(vector<int>& piles) {
        int n=piles.size(),sum=0;
        vector<vector<int>>v(n,vector<int>(n+1));
        for (int i = n-1; i >= 0; --i) {
            sum+=piles[i];
            for (int j = 1; j <= n; ++j) {
                if (i+2*j>=n)
                    v[i][j]=sum;
                else{
                    for (int k = 1; k <= 2*j; ++k) {
                        v[i][j]= max(v[i][j],sum-v[i+k][max(k,j)]);
                    }
                }
            }
        }
        return v[0][1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}