#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int f(int n){
        int ans=0;
        while (n){
            ans+=n%10;
            n/=10;
        }
        return ans;
    }
    int smallestIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); ++i) {
            if (f(nums[i])==i)
                return i;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}