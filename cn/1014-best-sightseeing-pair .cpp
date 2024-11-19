#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int MAX=values[0],n=values.size(),ans=0,pos=0;
        for (int i = 1; i < n; ++i) {
            ans= max(ans,values[i]+values[pos]+pos-i);
            if (i+values[i]>MAX){
                MAX=i+values[i];
                pos=i;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}