#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    map<int,int,greater<>>m;
    int specialArray(vector<int>& nums) {
        int sum=0,pre=INT_MAX;
        for (auto &item: nums)
            ++m[item];
        m[-1]=0;
        for (auto &[_,a]: m){
            if (sum){
                if (sum>_&&sum<=pre)
                    return sum;
            }
            pre=_;
            sum+=a;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}