#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    vector<long long> sumOfThree(long long num) {
        if (num%3)
            return {};
        return {num/3-1,num/3,num/3+1};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}