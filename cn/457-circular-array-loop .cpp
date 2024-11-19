#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool circularArrayLoop(vector<int>& nums) {
        int n=nums.size();
        for (int i = 0; i < n; ++i) {
            nums[i]%=n;
        }
        for (int i = 0; i < n; ++i) {
            if (nums[i]){
                int pos=i;
                for (int j = 0; j < n; ++j) {
                    pos=(pos+nums[pos]+n)%n;
                    if (nums[pos]*nums[i]<=0)
                        break;
                    if (pos==i)
                        return true;
                }
            }
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}