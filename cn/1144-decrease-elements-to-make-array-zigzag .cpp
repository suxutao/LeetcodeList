#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int movesToMakeZigzag(vector<int>& nums) {
        int a1=0,a2=0,n=nums.size();
        nums.insert(nums.begin(),INT_MAX);
        nums.push_back(INT_MAX);
        for (int i = 1; i <= n; ++i) {
            if (i&1){
                a1+=max(0,nums[i]-min(nums[i-1],nums[i+1])+1);
            }else{
                a2+=max(0,nums[i]-min(nums[i-1],nums[i+1])+1);
            }
        }
        return min(a1,a2);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}