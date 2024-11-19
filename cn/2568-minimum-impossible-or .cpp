#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        for (int i = 1; i <= (1 << 30); i<<=1) {
            if (!s.contains(i))
                return i;
        }
        return 0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}