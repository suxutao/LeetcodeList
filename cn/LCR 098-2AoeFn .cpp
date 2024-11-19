#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int uniquePaths(int m, int n) {
        if (m>n)
            swap(m,n);
        long long ans=1;
        for (int i = 1; i < m; ++i) {
            ans=ans*(i+n-1)/i;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}