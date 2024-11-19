#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int n=batteryPercentages.size(),ans=0;
        for (int i = 0; i < n; ++i) {
            if (batteryPercentages[i]){
                for (int j = i+1; j < n; ++j) {
                    batteryPercentages[j]= max(0,batteryPercentages[j]-1);
                }
                ans++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}