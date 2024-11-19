#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>v(n,start);
        for (int i = 1; i < n; ++i) {
            v[i]+=i*2;
        }
        int ans=v[0];
        for (int i = 1; i < n; ++i) {
            ans^=v[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}