#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int ans=0;
        unordered_set<int>s(nums.begin(),nums.end());
        for (auto &i: s){
            int f0=0,f1=INT_MIN,f2=INT_MIN;
            for (auto &j: nums){
                f2= max(f2,f1)+(j==k);
                f1= max(f1,f0)+(j==i);
                f0+=(j==k);
            }
            ans= max(ans, max(f1,f2));
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}