#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long countGood(vector<int>& nums, int k) {
        ll ans=0,r=0,l=0,n=nums.size(),sum=0;
        unordered_map<int,int>m;
        while (r<n){
            sum+=m[nums[r]]++;
            while (sum>=k){
                sum-=--m[nums[l++]];
            }
            ans+=l;
            ++r;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}