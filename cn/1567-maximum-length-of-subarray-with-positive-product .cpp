#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int n=nums.size(),ans=0;
        vector<int>po(n),ne(n);
        if (nums[0]>0)
            po[0]=1,ans=1;
        if (nums[0]<0)
            ne[0]=1;
        for (int i = 1; i < n; ++i) {
            if (nums[i]>0){
                po[i]=1+po[i-1];
                ne[i]=ne[i-1]>0?1+ne[i-1]:0;
            }else if (nums[i]<0){
                po[i]=ne[i-1]>0?1+ne[i-1]:0;
                ne[i]=1+po[i-1];
            }
            ans= max(ans,po[i]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}