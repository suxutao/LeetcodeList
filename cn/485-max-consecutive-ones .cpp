#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int MAX=0,temp=0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i])
                temp++;
            else{
                MAX= max(MAX,temp);
                temp=0;
            }
        }
        MAX= max(MAX,temp);
        return MAX;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}