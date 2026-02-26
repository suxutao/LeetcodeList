#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int s[2]{},n=nums.size(),p=0;
        for (int i = 0; i < n; ++i) {
            if (nums[i]&1){
                p=1-p;
            }
            if (i%6==5){
                p=1-p;
            }
            s[p]+=nums[i];
        }
        return s[0]-s[1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}