#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool pan(int x){
        if (x==1)
            return false;
        for (int i = 2; i <= sqrt(x); ++i) {
            if (x%i==0)
                return false;
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int l=-1,r;
        for (int i = 0; i < nums.size(); ++i) {
            if (pan(nums[i])){
                l=i;
                break;
            }
        }
        if (l==-1)
            return 0;
        for (int i = nums.size()-1; i >= 0; --i) {
            if (pan(nums[i])){
                r=i;
                break;
            }
        }
        return r-l;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}