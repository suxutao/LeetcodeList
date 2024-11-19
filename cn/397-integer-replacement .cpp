#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int integerReplacement(long long n) {
        int ans=0;
        while (n!=1){
            if (n&1){
                if (n==3){
                    return 2+ans;
                }
                if (n&2){
                    n++;
                }else{
                    n--;
                }
            }else{
                n>>=1;
            }
            ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}