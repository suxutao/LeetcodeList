#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minFlips(int a, int b, int c) {
        bitset<32>A(a),B(b),C(c),D=A|B;
        int ans=0;
        for (int i = 0; i < 32; ++i) {
            if (C[i]!=D[i]){
                if (!C[i])
                    ans+=A[i]+B[i];
                else
                    ans++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}