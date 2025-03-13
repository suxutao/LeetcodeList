#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_set<int>s;
    int dfs(int n){
        if (!s.contains(n))
            return 0;
        s.erase(n);
        return 1+ dfs(n-1)+ dfs(n+1);
    }
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(),ans=0;
        for (int i = 0; i < n; ++i) {
            s.insert(nums[i]);
        }
        for (int i = 0; i < n; ++i) {
            if (s.contains(nums[i])){
                ans= max(ans, dfs(nums[i]));
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}