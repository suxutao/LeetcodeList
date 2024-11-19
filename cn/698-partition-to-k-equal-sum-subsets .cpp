#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int sum,cnt;
    vector<bool>vis;
    bool dfs(vector<int>&v,int su,int cn,int pos){
        if (su==sum){
            cn++,su=0,pos=1;
        }
        if (pos==v.size())
            pos=1;
        if (cn==cnt)
            return true;
        for (int i = pos; i < v.size(); ++i) {
            if (!vis[i]&&su+v[i]<=sum){
                vis[i]=1;
                if (dfs(v,su+v[i],cn,i+1))
                    return true;
                vis[i]=0;
            }
        }
        return false;
    }
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        sum=accumulate(nums.begin(), nums.end(),0);
        if (sum%k)
            return false;
        sort(nums.begin(), nums.end(),greater<>());
        cnt=k;sum/=k;
        vis.resize(nums.size());
        return dfs(nums,nums[0],0,1);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{4, 3, 2, 3, 5, 2, 1};
    cout<<Solution().canPartitionKSubsets(v,4);
    return 0;
}