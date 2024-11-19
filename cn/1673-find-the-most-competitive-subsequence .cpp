#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        vector<int>ans(k),temp;
        for (int i = 0; i < nums.size(); ++i) {
            while (!temp.empty()&&temp.size()+nums.size()-i>k&&temp.back()>nums[i]){
                temp.pop_back();
            }
            temp.push_back(nums[i]);
            if (temp.size()==k)
                copy(temp.begin(), temp.end(),ans.begin());
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}