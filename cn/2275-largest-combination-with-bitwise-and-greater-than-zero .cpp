#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int arr[31]{};
        for (int i = 0; i < candidates.size(); ++i) {
            for (int j = 0; j <= 30; ++j) {
                if (candidates[i]>>j&1)
                    ++arr[j];
            }
        }
        return *max_element(arr,arr+30);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}