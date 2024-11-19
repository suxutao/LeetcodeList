#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans=0;
        int l=0,r=nums.size()-1;
        while (l<r){
            string s=to_string(nums[l])+ to_string(nums[r]);
            ans+= stoll(s);
            l++;r--;
        }
        if (nums.size()&1)
            ans+=nums[l];
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}