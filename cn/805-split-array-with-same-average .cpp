#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<int,int>m;
    bool splitArraySameAverage(vector<int>& nums) {
        int n=nums.size(),sum=0,avg,a=n/2,b=n-n/2;
        for (auto &i: nums){
            i*=n;
            sum+=i;
        }
        avg=sum/n;
        for (auto &i: nums){
            i-=avg;
        }
        vector<int>v1(a),v2(b);
        for (int i = 0; i < a; ++i) {
            v1[i]=nums[i];
        }
        for (int i = a; i < n; ++i) {
            v2[i-a]=nums[i];
        }
        for (int i = 1; i < (1 << a); ++i) {
            int s=0;
            for (int j = 0; j < a; ++j) {
                if ((i>>j)&1){
                    s+=v1[j];
                }
            }
            m[s]=i==(1<<a)-1?2:1;
        }
        if (m[0])
            return true;
        for (int i = 1; i < (1 << b); ++i) {
            int s=0;
            for (int j = 0; j < b; ++j) {
                if ((i>>j)&1){
                    s+=v2[j];
                }
            }
            if (m[-s]==1||m[-s]==2&&i!=(1<<b)-1)
                return true;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}