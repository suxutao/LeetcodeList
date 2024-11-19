#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int a=0,MAX=INT_MIN,sum=0;
        while(a<nums.size()&&nums[a]<0) a++;
        if (a==nums.size()){
            for (int i = 0; i < nums.size(); ++i) {
                MAX= max(MAX,nums[i]);
            }
            return MAX;
        }
        for (int i = a; i < nums.size(); ++i) {
            sum+=nums[i];
            MAX= max(MAX,sum);
            if (sum<0)
                sum=0;
        }
        return MAX;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}