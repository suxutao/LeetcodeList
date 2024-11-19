#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>v(nums.size()*2);
        std::copy(nums.begin(), nums.end(),v.begin());
        std::copy(nums.begin(), nums.end(),v.begin()+nums.size());
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}