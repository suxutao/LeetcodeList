#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int sum=0;
        int fushu=0;
        bool zero= false;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]<0) {
                fushu++;
                continue;
            }
            else if (nums[i]==0){
                zero= true;
            }
            break;
        }
        if (zero){
            if (k>fushu)
                k=fushu;
            for (int i = 0; i < k; ++i) {
                sum-=nums[i];
            }
            for (int i = k; i < nums.size(); ++i) {
                sum+=nums[i];
            }
        }else{
            if (k<=fushu){
                for (int i = 0; i < k; ++i) {
                    sum-=nums[i];
                }
                for (int i = k; i < nums.size(); ++i) {
                    sum+=nums[i];
                }
            }else{
                if ((k-fushu)&1){
                    if (fushu==nums.size()){
                        for (int i = 0; i < nums.size() - 1; ++i) {
                            sum-=nums[i];
                        }
                        sum+=nums[nums.size()-1];
                    }else if (fushu) {
                        for (int i = 0; i < fushu - 1; ++i) {
                            sum -= nums[i];
                        }
                        for (int i = fushu + 1; i < nums.size(); ++i) {
                            sum += nums[i];
                        }
                        sum += max(-nums[fushu - 1] - nums[fushu], nums[fushu - 1] + nums[fushu]);
                    }else{
                        for (int i = 1; i < nums.size(); ++i) {
                            sum+=nums[i];
                        }
                        sum-=nums[0];
                    }
                }else{
                    for (int i = 0; i < fushu; ++i) {
                        sum-=nums[i];
                    }
                    for (int i = fushu; i < nums.size(); ++i) {
                        sum+=nums[i];
                    }
                }
            }
        }
        return sum;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}