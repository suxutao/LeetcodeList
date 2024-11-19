#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1=0,num2=0;
        for (int i = 1; i <= n; ++i) {
            if (i%m==0)
                num2+=i;
            else
                num1+=i;
        }
        return num1-num2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}