#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool hasZero(int n){
        while (n){
            if (n%10==0)
                return false;
            n/=10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        for (int i = 1; i < n; ++i) {
            if (hasZero(i)&& hasZero(n-i))
                return {i,n-i};
        }
        return {};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}