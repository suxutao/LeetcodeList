#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maxScore(vector<int>& nums, int x) {
        ll a=INT_MIN,b=INT_MIN;
        if (nums[0]&1) {
            a=nums[0];
        }else {
            b=nums[0];
        }
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i]&1){
                ll temp= max(a+nums[i],b+nums[i]-x);
                a=temp;
            }else{
                ll temp= max(b+nums[i],a+nums[i]-x);
                b=temp;
            }
        }
        return max(a,b);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}