#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    char findKthBit(int n, int k) {
        int len=1;
        bool re=0;
        while (len<k){
            len=len*2+1;
        }
        while (len>1){
            int t=(len-1)/2;
            if (k==t+1){
                return re?'0':'1';
            }else if (k>t+1){
                k=len-k+1;
                re=!re;
            }
            len=t;
        }
        return re?'1':'0';
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}