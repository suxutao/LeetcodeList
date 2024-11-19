#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0,arr[101]={0};
        for (const auto &item: nums){
            arr[item]++;
        }
        for (int i = 1; i < 101; ++i) {
            ans+=arr[i]*(arr[i]-1)/2;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}