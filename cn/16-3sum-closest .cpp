#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int j,k,ans=0,MIN=100000;
        int sum,jue;
        for (int i = 0; i < nums.size() - 2; ++i) {
            j=i+1;k=nums.size()-1;
            sum=nums[i]+nums[j]+nums[k];
            jue=abs(sum-target);
            if (!jue)
                return target;
            if (jue<MIN){
                ans=sum;
                MIN=jue;
            }
            while (sum<target&&k>j+1){
                j++;
                sum=sum-nums[j-1]+nums[j];
                jue=abs(sum-target);
                if (!jue)
                    return target;
                if (jue<MIN){
                    ans=sum;
                    MIN=jue;
                }
            }
            while(sum>target&&j<k-1){
                k--;
                sum=sum-nums[k+1]+nums[k];
                jue=abs(sum-target);
                if (!jue)
                    return target;
                if (jue<MIN){
                    ans=sum;
                    MIN=jue;
                }
            }
            while (sum<target&&k>j+1){
                j++;
                sum=sum-nums[j-1]+nums[j];
                jue=abs(sum-target);
                if (!jue)
                    return target;
                if (jue<MIN){
                    ans=sum;
                    MIN=jue;
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}