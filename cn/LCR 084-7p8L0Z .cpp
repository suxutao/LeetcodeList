#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>>vv;
    vector<int>v;
    vector<bool>b;
    void hui(vector<int>& nums){
        if (v.size()==nums.size()){
            vv.push_back(v);
            return;
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (i>0&&nums[i]==nums[i-1]&&b[i-1])
                continue;
            if (!b[i]){
                v.push_back(nums[i]);
                b[i]=true;
                hui(nums);
                b[i]= false;
                v.pop_back();
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        if (nums.size()==1)
            return {{nums[0]}};
        b.assign(nums.size(), false);
        sort(nums.begin(),nums.end());
        hui(nums);
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}