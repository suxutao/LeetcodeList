#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countOdds(int low, int high) {
        if (low&1||high&1){
            return (high-low)/2+1;
        }else{
            return (high-low)/2;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}