#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int ans=0,n=hours.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                if ((hours[i]+hours[j])%24==0)
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