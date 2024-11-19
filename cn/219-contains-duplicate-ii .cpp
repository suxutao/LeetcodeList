#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for (int i = 0; i < nums.size(); ++i) {
            if (m[nums[i]]&&i-m[nums[i]]+1<=k)
                return true;
            m[nums[i]]=i+1;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}