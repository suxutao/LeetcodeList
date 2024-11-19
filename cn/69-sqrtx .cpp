#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    typedef long long ll;
    int mySqrt(int x) {
        if (x==0||x==1)
            return x;
        ll l=1,r=x/2,middle,s1,s2;
        while(l<r){
            middle=(l+r)/2;
            s1=middle*middle;
            s2=(middle+1)*(middle+1);
            if (s1<=x&&s2>x)
                return middle;
            else if (s2<=x){
                l=middle+1;
            }else{
                r=middle-1;
            }
        }
        return l;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}