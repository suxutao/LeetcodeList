#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool pan(vector<int>&v){
        if (v.empty())
            return true;
        for (int i = 0; i < v.size()-1; ++i) {
            if (v[i+1]<=v[i])
                return false;
        }
        return true;
    }
    int incremovableSubarrayCount(vector<int>& nums) {
        int n=nums.size(),ans=0;
        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                vector<int>v;
                for (int k = 0; k < i; ++k) {
                    v.push_back(nums[k]);
                }
                for (int k = j+1; k < n; ++k) {
                    v.push_back(nums[k]);
                }
                if (pan(v))
                    ++ans;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}