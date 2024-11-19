#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumOperations(string num) {
        if (num.length()==1){
            return num[0]=='0'?0:1;
        }
        int n=num.length();
        bool z=0,zz=0,wu=0;
        for (int i = n-1; i >= 0; --i) {
            switch (num[i]) {
                case '0':
                    if (z)
                        return n-i-2;
                    else
                        z=1;
                    break;
                case '5':
                    wu=1;
                    if (z)
                        return n-i-2;
                    break;
                case '2':
                case '7':
                    if (wu)
                        return n-i-2;
            }
        }
        return z?n-1:n;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}