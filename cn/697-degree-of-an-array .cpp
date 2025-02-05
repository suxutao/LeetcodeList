#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n=nums.size(),mx=0,ans=n;
        unordered_map<int,vector<int>>m;
        for (int i = 0; i < n; ++i) {
            m[nums[i]].push_back(i);
        }
        for (auto &[a,b]: m){
            mx= max(mx,(int)b.size());
        }
        for (auto &[a,b]: m){
            if (b.size()==mx){
                ans= min(ans,b.back()-b.front()+1);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}