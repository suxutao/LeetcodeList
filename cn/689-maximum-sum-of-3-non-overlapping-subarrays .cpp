#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        int n=nums.size(),com=INT_MIN;
        vector<int>v;
        vector<int>pre(n+1);
        vector<pair<int,int>>a(n, {INT_MAX,0}),b(n, {INT_MAX,n-k});
        for (int i = 0; i < n; ++i) {
            pre[i+1]=pre[i]+nums[i];
        }
        a[0]={pre[k],0};
        b[n-k]={pre[n]-pre[n-k],n-k};
        for (int i = 1; i < n-k; ++i) {
            if (pre[i+k]-pre[i]<=a[i-1].first){
                a[i]=a[i-1];
            }else{
                a[i]={pre[i+k]-pre[i],i};
            }
        }
        for (int i = n-k-1; i >= 0; --i) {
            if (pre[i+k]-pre[i]<b[i+1].first){
                b[i]=b[i+1];
            }else{
                b[i]={pre[i+k]-pre[i],i};
            }
        }
        for (int i = k; i <= n - k * 2; ++i) {
            int temp=pre[i+k]-pre[i]+a[i-k].first+b[i+k].first;
            if (temp>com){
                com=temp;
                v={a[i-k].second,i,b[i+k].second};
            }else if (temp==com){
                vector<int>t{a[i-k].second,i,b[i+k].second};
                v= min(v,t);
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){

    return 0;
}