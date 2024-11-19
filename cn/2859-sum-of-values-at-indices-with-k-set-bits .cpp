#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int temp,ans=0,t;
        for (int i = 0; i < nums.size(); ++i) {
            temp=0;t=i;
            while (t){
                temp+=t&1;
                t>>=1;
            }
            if (temp==k)
                ans+=nums[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}