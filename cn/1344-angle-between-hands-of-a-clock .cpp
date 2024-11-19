#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    double angleClock(int hour, int minutes) {
        double fen=minutes*6;
        double shi=hour*30+minutes/2.0;
        double ans= abs(shi-fen);
        ans= min(ans,360-ans);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}