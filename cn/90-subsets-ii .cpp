#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>>vv;
    vector<int>v;
    vector<bool>b;
    void hui(vector<int>& nums,int pos){
        if (v.size()==nums.size()) {
            return;
        }
        for (int i = pos; i < nums.size(); ++i) {
            if (i>0&&nums[i]==nums[i-1]&&!b[i-1]){
                continue;
            }
            v.push_back(nums[i]);
            vv.push_back(v);
            b[i]=true;
            hui(nums,i+1);
            b[i]=false;
            v.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        if (nums.size()==1)
            return {{},{nums[0]}};
        sort(nums.begin(),nums.end());
        vv.push_back({});
        b.assign(nums.size(),false);
        hui(nums,0);
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v={1,2,2};
    Solution().subsetsWithDup(v);
    return 0;
}