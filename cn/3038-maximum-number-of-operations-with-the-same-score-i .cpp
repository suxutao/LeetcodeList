#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int ans=1,num=nums[0]+nums[1];
        for (int i = 2; i < nums.size(); i+=2) {
            if (nums[i]+nums[i+1]==num){
                ans++;
            }else{
                break;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}