#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool checkDivisibility(int n) {
        int ji=1,he=0,a=n;
        while (a){
            he+=a%10;
            ji*=a%10;
            a/=10;
        }
        return n%(ji+he)==0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}