#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    vector<long long> findMaxSum(vector<int>& nums1, vector<int>& nums2, int k) {
        ll n=nums1.size(),sum=0;
        priority_queue<int,vector<int>,greater<>>q;
        vector<array<int,3>>arr(n);
        vector<ll>ans(n);
        for (int i = 0; i < n; ++i) {
            arr[i]={nums1[i],nums2[i],i};
        }
        ranges::sort(arr);

        sum=arr[0][1];
        q.push(sum);
        for (int i = 1; i < n; ++i) {
            if (arr[i][0]==arr[i-1][0]){
                ans[arr[i][2]]=ans[arr[i-1][2]];
            }else{
                ans[arr[i][2]]=sum;
            }
            sum+=arr[i][1];
            q.push(arr[i][1]);
            if (q.size()>k){
                sum-=q.top();
                q.pop();
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}