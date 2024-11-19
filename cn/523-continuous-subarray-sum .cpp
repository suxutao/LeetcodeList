#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    bool checkSubarraySum(vector<int>& nums, int k) {
        ll sum=0;
        unordered_map<int,pair<bool,int>>m;
        m[0]= {1,-1};
        for (int j = 0; j < nums.size(); ++j) {
            int i=nums[j];
            sum=(sum+i)%k;
            if (m[sum].first&&m[sum].second+1<j)
                return true;
            m[sum].first=1;
            if (m[sum].second==0&&sum!=nums[0]%k)
                m[sum].second=j;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}