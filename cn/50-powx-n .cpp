#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    double myPow(double x, int n) {
        double a=1;
        if (n==0||x==1)
            return 1;
        else if (n>0){
            while(n){
                if (n&1)
                    a*=x;
                x=x*x;
                n>>=1;
            }
            return a;
        }else{
            long long n2=(long long)n*(-1l);
            while(n2){
                if (n2&1)
                    a*=x;
                x=x*x;
                n2>>=1;
            }
            return 1/a;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}