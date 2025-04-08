#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size(),i;
        set<int>s;
        for (i = n-1; i >= 0; --i) {
            if (s.contains(nums[i])){
                break;
            }else{
                s.insert(nums[i]);
            }
        }
        return ceil((i+1)/3.);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}