#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int sum=0,he=0,MIN=nums.size(),n=nums.size();
        unordered_map<int,int>s;
        for (auto &i: nums){
            i%=p;
            sum=(sum+i)%p;
        }
        if (sum==0)
            return 0;
        s[0]=-1;
        for (int i = 0; i < n; ++i) {
            he=(he+nums[i])%p;
            if (s.contains((he+p-sum)%p)){
                MIN=min(MIN,i-s[(he+p-sum)%p]);
            }
            s[he]=i;
        }
        return MIN==n?-1:MIN;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{8,32,31,18,34,20,21,13,1,27,23,22,11,15,30,4,2};
    for (int i = 0; i < v.size()-7; ++i) {
        int sum=0;
        for (int j = 0; j < 7; ++j) {
            sum=(sum+v[j+i])%148;
        }
        cout<<sum<<' ';
    }
    Solution().minSubarray(v,148);
    return 0;
}