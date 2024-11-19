#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for (auto &item: nums){
            if (to_string(item).size()%2==0)
                ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}