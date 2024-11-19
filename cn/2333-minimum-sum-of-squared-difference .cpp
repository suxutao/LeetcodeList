#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n=nums1.size(),k=k1+k2;
        ll ans=0,sum=0;
        vector<ll>v(n);
        for (int i = 0; i < n; ++i) {
            v[i]= abs(nums1[i]-nums2[i]);
            sum+=v[i];
            ans+=v[i]*v[i];
        }
        if (sum<=k)
            return 0;
        sort(v.begin(), v.end(),greater<>());
        v.push_back(0);
        for (int i = 0;; ++i) {
            ll j=i+1,temp=v[i],c=j*(temp-v[j]);
            ans-=temp*temp;
            if (c<k){
                k-=c;
                continue;
            }
            temp-=k/j;
            return ans+k%j*(temp-1)*(temp-1)+(j-k%j)*temp*temp;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}