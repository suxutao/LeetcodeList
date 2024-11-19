#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num==1)
            return 0;
        int sum=1,t=sqrt(num);
        if (t*t==num)
            sum=t;
        for (int i = 2; i < sqrt(num); ++i) {
            if (num%i==0)
                sum+=i+num/i;
        }
        return sum==num;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}