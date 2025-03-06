#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n=nums.size(),ans=0;
        unordered_map<int,int>m;
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                ++m[nums[i]*nums[j]];
            }
        }
        for (auto &[_,a]: m){
            ans+=a*(a-1);
        }
        return ans*4;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}