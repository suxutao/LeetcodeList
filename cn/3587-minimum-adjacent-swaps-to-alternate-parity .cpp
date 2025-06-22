#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size(),ji=0,ou=0;
        vector<int>j,o;
        for (int i = 0; i < n; ++i) {
            if (nums[i]&1){
                ji++;
                j.push_back(i);
            }else{
                ou++;
                o.push_back(i);
            }
        }
        if (n&1){
            int ans=0;
            if (abs(ji-ou)>1)
                return -1;
            if (ji>ou){
                for (int i = 0; i < ji; ++i) {
                    ans+= abs(j[i]-(i*2));
                }
            }else{
                for (int i = 0; i < ou; ++i) {
                    ans+= abs(o[i]-(i*2));
                }
            }
            return ans;
        }else{
            int ans1=0,ans2=0;
            if (ji!=ou)
                return -1;
            for (int i = 0; i < ji; ++i) {
                ans1 += abs(j[i]-(i*2));
            }
            for (int i = 0; i < ou; ++i) {
                ans2 += abs(o[i]-(i*2));
            }
            return min(ans1,ans2);
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}