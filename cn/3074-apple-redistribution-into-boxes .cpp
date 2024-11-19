#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumBoxes(vector<int> &apple, vector<int> &capacity) {
        int s = accumulate(apple.begin(), apple.end(), 0);
        sort(capacity.begin(),capacity.end(), greater<>());
        int i = 0;
        for (; s > 0; i++) {
            s -= capacity[i];
        }
        return i;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}