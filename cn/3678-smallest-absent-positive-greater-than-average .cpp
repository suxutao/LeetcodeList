#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int n=nums.size(),sum=0;
        unordered_set<int>s;
        for (int i = 0; i < n; ++i) {
            s.insert(nums[i]);
            sum+=nums[i];
        }
        sum/=n;
        for (int i = max(sum+1,1); ; ++i) {
            if (!s.contains(i))
                return i;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}