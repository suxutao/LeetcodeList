#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numTimesAllBlue(vector<int>& flips) {
        int n=flips.size(),ans=0;
        bitset<50005>t,flip;
        for (int i = 0; i < n; ++i) {
            flip[flips[i]-1]=1;
            t[i]=1;
            ans+=t==flip;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}