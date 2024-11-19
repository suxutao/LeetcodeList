#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    unordered_map<ll,int>m;
    int dfs(vector<int>&v,int l,int r,int val){
        if (l>=r)
            return 0;
        if (m[((ll)l<<32)|r])
            return m[((ll)l<<32)|r];
        int ans=0;
        if (v[l]+v[l+1]==val)
            ans= max(ans, 1+dfs(v,l+2,r,val));
        if (v[r]+v[r-1]==val)
            ans= max(ans, 1+dfs(v,l,r-2,val));
        if (v[r]+v[l]==val)
            ans= max(ans, 1+dfs(v,l+1,r-1,val));
        return m[((ll)l<<32)|r]=ans;
    }
    int maxOperations(vector<int>& nums) {
        if (nums.size()<=3)
            return 1;
        int ans=1,n=nums.size();
        ans= max(ans, 1+dfs(nums,0,n-3,nums[n-1]+nums[n-2]));
        ans= max(ans, 1+dfs(nums,2,n-1,nums[0]+nums[1]));
        ans= max(ans, 1+dfs(nums,1,n-2,nums[0]+nums[n-1]));
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}