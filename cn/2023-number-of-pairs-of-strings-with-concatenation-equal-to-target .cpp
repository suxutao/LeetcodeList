#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int n=nums.size(),ans=0;
        for (int i = 0; i < n; ++i) {
            if (nums[i].size()>target.size()||target.substr(0,nums[i].size())!=nums[i])
                continue;
            for (int j = 0; j < n; ++j) {
                if (i==j)
                    continue;
                if (nums[i].size()+nums[j].size()==target.size()&&nums[i]+nums[j]==target)
                    ans++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}