#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    int numberOfWays(int n, int x) {
        if (n==1)
            return 1;
        int high=x==1?n:pow(n,1./x)+1;
        vector<int>v(n+1);
        v[0]=1;
        for (int i = 1; i <= high; ++i) {
            int t= pow(i,x);
            for (int j = n; j >= t; --j) {
                v[j]=(v[j]+v[j-t])%N;
            }
        }
        return v[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().numberOfWays(49,2);
    return 0;
}