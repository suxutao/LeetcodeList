#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans=0;
        for (int i = 0; i < nums.size() - 2; ++i) {
            if (nums[i]==0){
                nums[i+1]^=1;
                nums[i+2]^=1;
                ans++;
            }
        }
        if (nums.back()==0||nums[nums.size()-2]==0)
            return -1;
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}