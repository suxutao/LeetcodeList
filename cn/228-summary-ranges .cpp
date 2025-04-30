#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if (nums.empty())
            return {};
        int n=nums.size(),l=0;
        vector<string>vs;
        for (int i = 1; i < n; ++i) {
            if (nums[i]!=nums[i-1]+1){
                if (i-1==l){
                    vs.push_back(to_string(nums[l]));
                }else{
                    vs.push_back(to_string(nums[l])+"->"+to_string(nums[i-1]));
                }
                l=i;
            }
        }
        if (n-1==l){
            vs.push_back(to_string(nums[l]));
        }else{
            vs.push_back(to_string(nums[l])+"->"+to_string(nums[n-1]));
        }
        return vs;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}