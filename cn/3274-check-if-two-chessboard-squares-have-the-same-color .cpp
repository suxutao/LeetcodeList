#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int a=((coordinate1[0]&1)+(coordinate1[1]&1))&1;
        int b=((coordinate2[0]&1)+(coordinate2[1]&1))&1;
        return a==b;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}