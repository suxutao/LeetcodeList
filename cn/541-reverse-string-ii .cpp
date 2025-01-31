#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.size(),i;
        for (i = 0; i+k <= n; i+=k*2) {
            reverse(s.begin()+i, s.begin()+i+k);
        }
        if (n-i<k){
            reverse(s.begin()+i, s.end());
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){

    return 0;
}