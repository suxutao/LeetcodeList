#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0,temp=x;
        while (x){
            sum+=x%10;
            x/=10;
        }
        return temp%sum?-1:sum;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}