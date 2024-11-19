#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int n=minutesToTest/minutesToDie;
        int ans= ceil(log2(buckets)/ log2(n+1));
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}