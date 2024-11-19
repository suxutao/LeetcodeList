#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        nums.insert(nums.begin(),1);
        unordered_map<int,int>m;
        m[1]=1;
        int ans=0,n=nums.size();
        for (int i = 1; i < n; ++i) {
            nums[i]+=nums[i-1];
            ans+=m[nums[i]-k];
            ++m[nums[i]];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}