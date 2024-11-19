#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if (nums.size()==1)
            return 1;
        int ans=1,temp;
        for (int i = 0; i < nums.size(); ++i) {
            temp=1;
            for (int j = i+1; j < nums.size(); ++j) {
                if (nums[j]>nums[j-1])
                    temp++;
                else{
                    break;
                }
            }
            ans= max(ans,temp);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}