#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int>s;
        for (auto &i: nums){
            if (!s.contains(i))
                s.insert(i);
            else
                return i;
        }
        return 0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}