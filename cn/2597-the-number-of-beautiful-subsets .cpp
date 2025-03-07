#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_multiset<int>s;
    int dfs(vector<int>&v,int i,int k){
        if (i==v.size())
            return 1;
        int ans=dfs(v,i+1,k);
        if (!s.contains(v[i]-k)){
            s.insert(v[i]);
            ans+=dfs(v,i+1,k);
            s.extract(v[i]);
        }
        return ans;
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        ranges::sort(nums);
        return dfs(nums,0,k)-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}