#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int MAX=1;
        vector<vector<int>>v(nums.size());
        sort(nums.begin(), nums.end());
        for (int i = 0; i < v.size(); ++i) {
            v[i].push_back(nums[i]);
            for (int j = 0; j < i; ++j) {
                if (nums[i]%nums[j]==0&&v[j].size()+1>v[i].size()){
                    v[i]=v[j];
                    v[i].push_back(nums[i]);
                    MAX= max<int>(MAX,v[i].size());
                }
            }
        }
        for (int i = v.size()-1; i >=0 ; --i) {
            if (v[i].size()==MAX)
                return v[i];
        }
        return {};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}