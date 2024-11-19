#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end(),greater<>());
        long long ans=0;
        for (int i = 0; i < k; ++i) {
            if (happiness[i]>i)
                ans+=happiness[i]-i;
            else
                break;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}