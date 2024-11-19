#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        if(k<=numOnes)
            return k;
        else if (k<=numOnes+numZeros)
            return numOnes;
        else if (k<=numOnes+numZeros+numNegOnes)
            return numOnes-(k-numOnes-numZeros);
        else
            return numOnes-numNegOnes;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}