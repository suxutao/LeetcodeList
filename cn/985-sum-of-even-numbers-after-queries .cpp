#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size(),sum=0;
        vector<int>ans;
        for (int i = 0; i < n; ++i) {
            if (nums[i]%2==0)
                sum+=nums[i];
        }
        for (auto &i: queries){
            if (nums[i[1]]&1){
                if (i[0]&1){
                    nums[i[1]]+=i[0];
                    sum+=nums[i[1]];
                }else{
                    nums[i[1]]+=i[0];
                }
            }else{
                if (i[0]&1){
                    sum-=nums[i[1]];
                    nums[i[1]]+=i[0];
                }else{
                    sum+=i[0];
                    nums[i[1]]+=i[0];
                }
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}