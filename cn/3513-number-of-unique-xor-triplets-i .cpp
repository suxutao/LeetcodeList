#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n=nums.size(),l=__builtin_clz(n);
        if (n==1)
            return 1;
        if (n==2)
            return 2;
        if ((n&(n-1))==0)
            return n<<1;
        return 1<<(32-l);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}