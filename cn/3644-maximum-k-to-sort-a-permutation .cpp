#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        for (int i = 0; i < n; ++i) {
            if (i!=nums[i])
                v.push_back(i);
        }
        if (v.empty())
            return 0;
        int ans=v[0];
        for (int i = 1; i < v.size(); ++i) {
            ans&=v[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}