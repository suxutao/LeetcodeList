#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        return max_element(arr.begin(), arr.end())-arr.begin();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}