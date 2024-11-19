#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        if (nums.size()==1)
            return 1;
        vector<int>v(nums.size(),1);
        vector<int>count(nums.size(),1);
        int MAX=0;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i]>nums[j]){
                    if (v[j] + 1 > v[i]) {
                        v[i] = v[j] + 1;
                        count[i] = count[j];
                    } else if (v[j] + 1 == v[i]) {
                        count[i] += count[j];
                    }
                }
                if (v[i] > MAX)
                    MAX = v[i];
            }
        }
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (MAX == v[i])
                ans += count[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}