#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int n=nums.size(),ans=0,arr[32]={};
        for (auto &i: nums){
            for (int j = 0; j < 32&&i; ++j) {
                arr[j]+=i&1;
                i>>=1;
            }
        }
        for (int i = 0; i < 32; ++i) {
            ans+=(n-arr[i])*arr[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}