#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>v;
        int n=nums.size();
        for (int i = 0; i < n; ++i,++i) {
            for (int j = 0; j < nums[i]; ++j) {
                v.push_back(nums[i+1]);
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}