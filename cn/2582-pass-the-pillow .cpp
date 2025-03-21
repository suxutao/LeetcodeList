#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int passThePillow(int n, int time) {
        int a=time/(n-1),b=time%(n-1);
        if (!(a&1))
            return b+1;
        else
            return n-b;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}