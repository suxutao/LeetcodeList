#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>v(nums.size());
        int a=0,b=1;
        for (const auto &i: nums){
            if (i&1){
                v[b]=i;
                b+=2;
            }else{
                v[a]=i;
                a+=2;
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}