#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int kthGrammar(int n, int k) {
        bool fan=0;
        while (n>1){
            if (k>(1<<(n-2))){
                if (n%2==0)
                    fan=!fan;
                k=(1<<(n-1))-k+1;
            }
            --n;
        }
        return fan;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}