#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int>m;
        for (auto &item: nums)
            ++m[item];
        for (auto &[_,a]: m){
            if (a>2)
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}