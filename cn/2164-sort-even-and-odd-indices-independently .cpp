#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n=nums.size();
        vector<int>v1,v2;
        for (int i = 0; i < n; ++i) {
            if (i&1)
                v2.push_back(nums[i]);
            else
                v1.push_back(nums[i]);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end(),greater<>());
        for (int i = 0; i < n; ++i) {
            if (i&1)
                nums[i]=v2[i/2];
            else
                nums[i]=v1[i/2];
        }
        return nums;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}