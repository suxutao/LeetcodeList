#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int bestTiming(vector<int>& prices) {
        int ans=0,MIN=1e6;
        for (auto &i: prices){
            ans= max(ans,i-MIN);
            MIN= min(MIN,i);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}