#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        int n=nums.size(),n0=count(nums.begin(), nums.end(),0),n1=n-n0,sum=0,MAX=0;
        vector<int>ans;
        if (n0>n1){
            MAX=n0;
            ans.push_back(n);
        }else if (n0==n1){
            MAX=n0;
            ans.push_back(0);
            ans.push_back(n);
        }else{
            MAX=n1;
            ans.push_back(0);
        }
        for (int i = 0; i < n-1; ++i) {
            if (nums[i])
                n1--;
            else
                sum++;
            if (sum+n1>MAX){
                MAX=sum+n1;
                ans.clear();
                ans.push_back(i+1);
            }else if (sum+n1==MAX){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}