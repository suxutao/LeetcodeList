#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>v(nums.size());
        for (int i = 0; i < n*2; i+=2) {
            v[i]=nums[i/2];
            v[i+1]=nums[i/2+n];
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}