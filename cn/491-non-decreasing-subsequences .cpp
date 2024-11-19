#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>v;
    vector<vector<int>>vv;
    void hui(vector<int>& nums,int pos){
        if (v.size()>1){
            vv.push_back(v);
        }
        if (v.size()>=nums.size())
            return;
        unordered_set<int>u;
        for (int i = pos; i < nums.size(); ++i) {
            if (!v.empty()&&nums[i]<v.back()||u.find(nums[i])!=u.end())
                continue;
            u.insert(nums[i]);
            v.push_back(nums[i]);
            hui(nums,i+1);
            v.pop_back();
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        if (nums.size()==1)
            return {};
        hui(nums,0);
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}