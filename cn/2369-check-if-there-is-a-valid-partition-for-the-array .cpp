#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool validPartition(vector<int>& nums) {
        vector<bool>v(nums.size()+1,false);
        v[0]=true;
        for (int i = 2; i < v.size(); ++i) {
            if (nums[i-1]==nums[i-2]){
                if (v[i-2]||v[i-3]&&nums[i-2]==nums[i-3])
                    v[i]=true;
            }else if (nums[i-1]==1+nums[i-2]){
                if (i>2&&v[i-3]&&nums[i-2]==nums[i-3]+1)
                    v[i]=true;
            }
        }
        return v[nums.size()];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}