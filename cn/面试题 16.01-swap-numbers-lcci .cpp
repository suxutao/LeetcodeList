#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> swapNumbers(vector<int>& numbers) {
        numbers[0]^=numbers[1];
        numbers[1]^=numbers[0];
        numbers[0]^=numbers[1];
        return numbers;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}