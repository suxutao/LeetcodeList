#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_set<int>s;
    bool containsDuplicate(vector<int>& nums) {
        for (int i:nums) {
            s.insert(i);
        }
        return s.size()!=nums.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}