#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxCoins(vector<int>& nums) {
        nums.insert(nums.begin(),1);
        nums.push_back(1);
        int n=nums.size();
        vector<vector<int>>v(n,vector<int>(n));
        for (int l = 3; l <= n; ++l) {
            for (int i = 0; i <= n - l; ++i) {
                int j=i+l-1;
                for (int k = i+1; k < j; ++k) {
                    v[i][j]= max(v[i][j],v[i][k]+v[k][j]+nums[i]*nums[k]*nums[j]);
                }
            }
        }
        return v[0][n-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}