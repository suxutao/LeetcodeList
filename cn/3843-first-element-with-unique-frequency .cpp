#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        int n=nums.size(),ans=INT_MAX;
        unordered_map<int,int>pos,f;
        for (int i = 0; i < n; ++i) {
            if (!pos.contains(nums[i])){
                pos[nums[i]]=i;
            }
            f[nums[i]]++;
        }
        unordered_map<int,vector<int>>m;
        for (auto &[_,a]: f){
            m[a].push_back(_);
        }
        for (auto &[a,b]: m){
            if (b.size()==1){
                ans=min(ans,pos[b[0]]);
            }
        }
        return ans==INT_MAX?-1:nums[ans];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}