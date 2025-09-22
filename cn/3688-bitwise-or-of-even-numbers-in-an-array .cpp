#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int ans=0;
        for (auto &i: nums){
            if (i%2==0)
                ans|=i;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}