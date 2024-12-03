#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int averageValue(vector<int>& nums) {
        int ans=0,cnt=0;
        for (auto &i: nums){
            if (i%6==0)
                ans+=i,cnt++;
        }
        return cnt?ans/cnt:0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}