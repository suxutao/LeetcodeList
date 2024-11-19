#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        set<int,greater<>>s(nums.begin(),nums.end());
        for (auto &i: s){
            if (s.contains(-i))
                return i;
            if (i<=0)
                break;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}