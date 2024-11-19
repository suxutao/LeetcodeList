#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>m;
        for (int i = 0; i < nums.size(); ++i) {
            ++m[nums[i]];
        }
        int ans=0;
        for (auto &[_,a]: m){
            if (a==2)
                ans^=_;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}