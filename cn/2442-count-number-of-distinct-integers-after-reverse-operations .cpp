#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        for (auto &item: nums){
            string ss=to_string(item);
            std::reverse(ss.begin(), ss.end());
            s.insert(stoi(ss));
        }
        return s.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}