#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>v(100001,0);
        vector<int>ans;
        for (int i = 0; i < nums.size(); ++i) {
            v[nums[i]]++;
        }
        for (int i = 0; i < v.size(); ++i) {
            if (v[i]==2)
                ans.push_back(i);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}