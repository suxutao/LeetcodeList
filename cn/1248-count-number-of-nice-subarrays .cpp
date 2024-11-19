#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int ans=0,n=nums.size();
        vector<int>v(n+1);
        unordered_map<int,int>m;
        m[0]=1;
        for (int i = 0; i < n; ++i) {
            v[i+1]=v[i]+(nums[i]&1);
            ++m[v[i+1]];
        }
        for (int i = 1; i <= n; ++i) {
            ans+=m[v[i]-k];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}