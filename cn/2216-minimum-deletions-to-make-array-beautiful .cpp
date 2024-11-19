#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int sz=0,shang=0;
        for (int i = 0; i < nums.size(); ++i) {
            if (sz&1){
                if (nums[i]!=shang){
                    sz++;
                    shang=nums[i];
                }
            }else{
                sz++;
                shang=nums[i];
            }
        }
        return nums.size()-sz/2*2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}