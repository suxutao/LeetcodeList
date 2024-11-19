#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int,int>m;
        int ans=0;
        for (int i = 0; i < nums.size(); ++i) {
            m[nums[i]]=1;
        }
        for (int i = 0; i < nums.size() - 2; ++i) {
            if (m[nums[i]+diff]&&m[nums[i]+2*diff])
                ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}