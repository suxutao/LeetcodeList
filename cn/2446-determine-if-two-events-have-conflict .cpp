#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        if (event1[0]>event2[0])
            swap(event1,event2);
        return event1[1]>=event2[0];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}