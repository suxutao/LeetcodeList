#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        ll ans=0;
        int n=matrix.size(),MIN=INT_MAX,cnt=0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                ans+=abs(matrix[i][j]);
                cnt+=matrix[i][j]<=0;
                MIN= min(MIN,abs(matrix[i][j]));
            }
        }
        if (cnt&1)
            ans-=2*MIN;
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}