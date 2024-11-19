#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int MAX=0,ans=1,temp;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]>MAX){
                ans=1;
                MAX=nums[i];
                temp=1;
            }else if (nums[i]==MAX){
                ++temp;
            }else{
                temp=0;
            }
            ans= max(ans,temp);
        }
        ans= max(ans,temp);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}