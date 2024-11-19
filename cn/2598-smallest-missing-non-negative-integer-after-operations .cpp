#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        unordered_map<int,int>s;
        for (auto &i: nums){
            s[(i%value+value)%value]++;
        }
        for (int i = 0;; ++i) {
            if (s[(i%value+value)%value]==0)
                return i;
            --s[(i%value+value)%value];
        }
        return 0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}