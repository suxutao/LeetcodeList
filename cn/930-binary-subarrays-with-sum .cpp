#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<int,int>m;
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans=0,sum=0;
        for (auto &item: nums){
            m[sum]++;
            sum+=item;
            ans+=m[sum-goal];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}