#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        if (nums[0]<k)
            return -1;
        else if (nums[0]==k)
            return set<int>(nums.begin(),nums.end()).size()-1;
        else
            return set<int>(nums.begin(),nums.end()).size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}