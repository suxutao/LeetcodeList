#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int a=numsDivide[0];
        for (int i = 1; i < numsDivide.size(); ++i) {
            a=__gcd(a,numsDivide[i]);
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i) {
            if (a%nums[i]==0)
                return i;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}