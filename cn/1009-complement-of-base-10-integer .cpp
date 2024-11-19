#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int bitwiseComplement(int n) {
        if (n==0)
            return 1;
        int num=0,an=0;
        while (n>>num)num++;
        for (int i = 0; i < num; ++i)an+=1<<i;
        return ~n&an;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}