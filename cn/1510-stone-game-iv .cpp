#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool winnerSquareGame(int n) {
        vector<bool>v(n+1);
        vector<int>sq;
        for (int i = 1; i <= sqrt(n); ++i) {
            sq.push_back(i*i);
            v[sq.back()]=1;
        }
        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < sq.size()&&sq[j]<=i; ++j) {
                if (!v[i-sq[j]])
                    v[i]=1;
            }
        }
        return v[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}