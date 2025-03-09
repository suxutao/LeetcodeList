#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int n=nums.size(),ans=1;
        vector<bool>vis(n);
        for (int i = 0; i < n; ++i) {
            if (!vis[i]){
                vis[i]=1;
                int cnt=1,p=nums[i];
                while (nums[p]!=nums[i]){
                    vis[p]=1;
                    cnt++;
                    p=nums[p];
                }
                ans= max(ans,cnt);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}