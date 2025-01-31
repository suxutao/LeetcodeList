#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n=timeSeries.size(),pre=timeSeries[0],p=1,ans=0;
        while (p<n){
            if (timeSeries[p]>timeSeries[p-1]+duration-1){
                ans+=timeSeries[p-1]+duration-pre;
                pre=timeSeries[p];
            }
            ++p;
        }
        return ans+timeSeries.back()+duration-pre;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}