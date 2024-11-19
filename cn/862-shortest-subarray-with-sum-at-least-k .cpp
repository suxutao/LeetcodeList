#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n=nums.size(),ans=INT_MAX;
        vector<long long>v(n+1);
        deque<long long>d;
        for (int i = 1; i <= n; ++i) {
            v[i]=v[i-1]+nums[i-1];
        }
        for (int i = 0; i <= n; ++i) {
            while (!d.empty()&&v[i]-v[d.front()]>=k){
                ans= min<int>(ans,i-d.front());
                d.pop_front();
            }
            while (!d.empty()&&v[d.back()]>=v[i]){
                d.pop_back();
            }
            d.push_back(i);
        }
        return ans==INT_MAX?-1:ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}