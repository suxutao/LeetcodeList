#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>s(nums.begin(),nums.end()),ss;
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                ss.insert(nums[i]^nums[j]);
            }
        }
        for (auto &item: ss){
            for (int i = 0; i < n; ++i) {
                s.insert(item^nums[i]);
            }
        }
        return s.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}