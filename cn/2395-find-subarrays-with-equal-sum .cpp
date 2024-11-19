#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    map<int,bool>m;
    bool findSubarrays(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; ++i) {
            int n=nums[i]+nums[i+1];
            if (!m[n])
                m[n]=true;
            else
                return true;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}