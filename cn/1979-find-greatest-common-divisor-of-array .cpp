#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int a= *max_element(nums.begin(), nums.end());
        int b= *min_element(nums.begin(), nums.end());
        return gcd(a,b);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}