#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int>v(2);
        for (int i = 0; i < 32; ++i) {
            if (i&1)
                v[1]+=n>>i&1;
            else
                v[0]+=n>>i&1;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}