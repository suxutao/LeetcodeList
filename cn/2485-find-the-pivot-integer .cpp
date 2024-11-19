#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int pivotInteger(int n) {
        vector<int>v(n+1);
        for (int i = 1; i <= n; ++i) {
            v[i]=v[i-1]+i;
        }
        for (int i = 1; i <= n; ++i) {
            if (v[i-1]==v[n]-v[i])
                return i;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}