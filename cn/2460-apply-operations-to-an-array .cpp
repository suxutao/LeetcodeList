#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size(),p=0;
        vector<int>v(nums.size());
        for (int i = 0; i < n - 1; ++i) {
            if (nums[i]==nums[i+1])
                nums[i]<<=1,nums[i+1]=0;
        }
        for (int i = 0; i < n; ++i) {
            if (nums[i])
                v[p++]=nums[i];
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}