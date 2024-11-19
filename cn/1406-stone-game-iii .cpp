#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string stoneGameIII(vector<int> &stoneValue) {
        int n = stoneValue.size(), sum = 0;
        vector<int> v(n+5,INT_MIN);
        v[n]=v[n+1]=v[n+2]=0;
        for (int i = n - 1; i >= 0; --i) {
            sum+=stoneValue[i];
            for (int j = 1; j <= 3; ++j) {
                v[i]= max(v[i],sum-v[i+j]);
            }
        }
        if (sum - v[0] > v[0])
            return "Bob";
        else if (sum == v[0] * 2)
            return "Tie";
        else
            return "Alice";
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {

    return 0;
}