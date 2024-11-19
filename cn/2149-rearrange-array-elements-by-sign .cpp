#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int a=0,b=1;
        vector<int>v(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]<0)
                v[b]=nums[i],b+=2;
            else
                v[a]=nums[i],a+=2;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}