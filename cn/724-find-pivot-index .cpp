#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>v(nums.size()+1);
        for (int i = 0; i < nums.size(); ++i) {
            v[i+1]=v[i]+nums[i];
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (v[i]==v.back()-v[i+1])
                return i;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}