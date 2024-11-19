#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans=INT_MAX;
        for (auto &i: nums){
            int t=0;
            while (i){
                t+=i%10;
                i/=10;
            }
            ans= min(ans,t);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}