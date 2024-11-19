#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findComplement(int num) {
        int n=0,an=0;
        while (num>>n)n++;
        for (int i = 0; i < n; ++i) {
            an+=1<<i;
        }
        return ~num&an;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}