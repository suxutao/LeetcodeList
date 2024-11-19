#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int clumsy(int n) {
        int a=0,ans=n;
        while(--n){
            switch (a) {
                case 0:ans*=n;a=1;
                    break;
                case 1:ans/=n;a=2;
                    break;
                case 2:ans+=n;a=3;
                    break;
                case 3:ans-=n;a=4;
                    break;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}