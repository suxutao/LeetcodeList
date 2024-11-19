#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minCost(vector<int>& nums, int k) {
        int n=nums.size(),temp;
        vector<int>dp(n+1,INT_MAX/2);
        unordered_map<int,int>m;
        dp[0]=0;
        for (int i = 1; i <= n; ++i) {
            m.clear();
            temp=0;
            for (int j = i; j ; --j) {
                m[nums[j-1]]++;
                if (m[nums[j-1]]==2){
                    temp+=2;
                }else if (m[nums[j-1]]>2){
                    temp++;
                }
                dp[i]= min(dp[i],dp[j-1]+k+temp);
            }
        }
        return dp[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}