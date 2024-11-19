#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        std::sort(arr.begin(), arr.end());
        std::sort(target.begin(), target.end());
        return target==arr;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}