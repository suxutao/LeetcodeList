#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        int ans=0,r=nums.size()-1;
        sort(nums.begin(), nums.end(),greater<>());
        vector<int>v(nums);
        std::reverse(v.begin(), v.end());
        for (int i = 0; i < v.size(); ++i) {
            if (nums[i]<v[r]){
                --r;++ans;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}