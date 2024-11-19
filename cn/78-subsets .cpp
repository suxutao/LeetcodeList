#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>>vv;
    vector<int>v;
    void hui(vector<int>& nums,int pos){
        if (v.size()==nums.size()){
            vv.push_back(v);
            return;
        }else if (!v.empty()&&v[v.size()-1]==nums[nums.size()-1]){
            vv.push_back(v);
            return;
        }
        for (int i = pos; i < nums.size(); ++i) {
            v.push_back(nums[i]);
            if (i!=nums.size()-1)
                vv.push_back(v);
            hui(nums,i+1);
            v.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        if (nums.size()==1)
            return {{},{nums[0]}};
        vv.push_back({});
        hui(nums,0);
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}