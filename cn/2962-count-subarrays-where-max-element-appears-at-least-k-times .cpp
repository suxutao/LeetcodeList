#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long countSubarrays(vector<int>& nums, int k) {
        ll ans=0,bi=nums[0],a,b;
        vector<int>v(1);
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i]>bi){
                v.clear();
                bi=nums[i];
                v.push_back(i);
            }else if (nums[i]==bi){
                v.push_back(i);
            }
        }
        if (v.size()<k)
            return 0;
        for (int l = 0; l+k-1 < v.size(); ++l) {
            if (l==0){
                a=v[l];
            }else{
                a=v[l]-v[l-1]-1;
            }
            b=nums.size()-v[l+k-1]-1;
            ans+=(b+1)*(1+a);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}