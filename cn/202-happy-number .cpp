#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int tran(int n){
        int a=0,b;
        while(n){
            b=n%10;
            a+=b*b;
            n/=10;
        }
        return a;
    }
    bool isHappy(int n) {
        int a=n,b=n;
        while (a!=1&&b!=1){
            a= tran(tran(a));
            b= tran(b);
            if (a==b&&a!=1)
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}