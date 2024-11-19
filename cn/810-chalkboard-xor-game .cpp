#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<int,int>m;
    bool xorGame(vector<int>& nums) {
        if (nums.size()&1){
            int ans=nums[0];
            for (int i = 1; i < nums.size(); ++i) {
                ans^=nums[i];
            }
            return ans==0;
        }else
            return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}