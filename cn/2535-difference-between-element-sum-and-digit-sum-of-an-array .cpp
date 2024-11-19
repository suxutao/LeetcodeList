#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0,n=0;
        for (auto &i: nums){
            sum+=i;
            while (i){
                n+=i%10;
                i/=10;
            }
        }
        return abs(sum-n);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}