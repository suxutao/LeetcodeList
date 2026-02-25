#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int lfs(vector<int>&v){
        int n=v.size();
        vector<int>tail;
        for (int i = 0; i < n; ++i) {
            auto pos=lower_bound(tail.begin(), tail.end(),v[i]);
            if (pos==tail.end()){
                tail.push_back(v[i]);
            }else{
                *pos=v[i];
            }
        }
        return tail.size();
    }
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size(),ans=0;
        for (int i = 0; i <= 30; ++i) {
            vector<int>v;
            for (int j = 0; j < n; ++j) {
                if (nums[j]>>i&1){
                    v.push_back(nums[j]);
                }
            }
            if (!v.empty()){
                ans=max(ans, lfs(v));
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}