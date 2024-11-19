#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int m=nums.size(),n=nums[0].size(),ans=0;
        for (int i = 0; i < n; ++i) {
            priority_queue<int>q;
            for (int j = 0; j < m; ++j) {
                int MAX=0,pos=0;
                for (int k = 0; k < n; ++k) {
                    if (nums[j][k]>MAX){
                        MAX=nums[j][k];
                        pos=k;
                    }
                }
                q.push(MAX);
                nums[j][pos]=0;
            }
            ans+=q.top();
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}