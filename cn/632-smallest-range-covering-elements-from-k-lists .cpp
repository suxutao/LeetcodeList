#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii = pair<int, int>;
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int n=nums.size(),mn,mx,pos;
        vector<int>ans{-100001,100001},ptr(n,1);
        priority_queue<pii,vector<pii>,greater<>>q1;
        priority_queue<pii>q2;
        for (int i = 0; i < n; ++i) {
            q1.emplace(nums[i][0],i);
            q2.emplace(nums[i][0],i);
        }
        while (!q1.empty()){
            mn=q1.top().first;
            pos=q1.top().second;
            while (!q2.empty()&&nums[q2.top().second][ptr[q2.top().second]-1]!=q2.top().first){
                q2.pop();
            }
            mx=q2.top().first;
            if (mx-mn<ans[1]-ans[0]||mx-mn==ans[1]-ans[0]&&mn<ans[0]){
                ans={mn,mx};
            }
            if (ptr[pos]<nums[pos].size()){
                q2.emplace(nums[pos][ptr[pos]],pos);
                q1.emplace(nums[pos][ptr[pos]++],pos);
            }else{
                break;
            }
            q1.pop();
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v{{1,2,3},{1,2,3},{1,2,3}};
    Solution().smallestRange(v);
    return 0;
}