#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int n=nums.size();
        vector<int>mx(n),mn(n);
        unordered_map<int,int>m;
        mx[0]=mn[0]=nums[0];
        m[nums[0]]=0;
        for (int i = 1; i < n; ++i) {
            mx[i]= max(mx[i-1],nums[i]);
            mn[i]= min(mn[i-1],nums[i]);
            if (!m.contains(nums[i]))
                m[nums[i]]=i;
        }
        for (int i = indexDifference; i < n; ++i) {
            if (abs(nums[i]-mn[i-indexDifference])>=valueDifference){
                return {m[mn[i-indexDifference]],i};
            }
            if (abs(nums[i]-mx[i-indexDifference])>=valueDifference){
                return {m[mx[i-indexDifference]],i};
            }
        }
        return {-1,-1};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}