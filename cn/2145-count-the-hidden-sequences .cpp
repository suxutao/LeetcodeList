#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long long n=differences.size(),mx=0,mn=0,sum=0;
        for (int i = 0; i < n; ++i) {
            sum+=differences[i];
            mx= max(mx,sum);
            mn= min(mn,sum);
        }
        if (mx-mn>upper-lower)
            return 0;
        return upper-lower-(mx-mn)+1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}