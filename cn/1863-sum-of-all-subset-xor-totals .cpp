#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int ans;
    void dfs(vector<int>&v,int temp=0,int pos=0){
        ans+=temp;
        for (int i = pos; i < v.size(); ++i) {
            temp^=v[i];
            dfs(v,temp,i+1);
            temp^=v[i];
        }
    }
    int subsetXORSum(vector<int>& nums) {
        ans=0;
        dfs(nums);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v={1,2};
    Solution().subsetXORSum(v);
    return 0;
}