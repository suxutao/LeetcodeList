#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int s1=accumulate(aliceSizes.begin(), aliceSizes.end(),0),s2=accumulate(bobSizes.begin(),bobSizes.end(),0),com=(s1-s2)/2;
        for (int i = 0; i < aliceSizes.size(); ++i) {
            for (int j = 0; j < bobSizes.size(); ++j) {
                if (aliceSizes[i]-bobSizes[j]==com)
                    return {aliceSizes[i],bobSizes[j]};
            }
        }
        return {};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}