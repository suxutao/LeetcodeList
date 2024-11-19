#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool arr[100005]={};
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (auto &item: nums){
            arr[item]= true;
        }
        vector<int>ans;
        for (int i = 1; i <= nums.size(); ++i) {
            if (!arr[i])
                ans.emplace_back(i);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}