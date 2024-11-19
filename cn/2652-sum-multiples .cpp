#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int sumOfMultiples(int n) {
        int ans=0;
        for (int i = 1; i <= n; ++i) {
            if (i%3==0||i%5==0||i%7==0)
                ans+=i;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}