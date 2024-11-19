#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        ll n=arr.size(),sum=accumulate(arr.begin(), arr.end(),0ll),sum1=0;
        ll d=INT_MIN,d1=INT_MIN,x=INT_MAX,x1=INT_MAX;
        if (sum>0){
            sum1=sum*(k-2);
            ll temp=0,MAX=INT_MIN;
            for (int i = 0; i < n; ++i) {
                temp+=arr[i];
                MAX= max(MAX,temp);
            }
            sum1+=MAX;
            MAX=INT_MIN;temp=0;
            for (int i = n-1; i >=0 ; --i) {
                temp+=arr[i];
                MAX= max(MAX,temp);
            }
            sum1+=MAX;
        }
        for (int i = 0; i < n; ++i) {
            d= max(0ll,d)+arr[i];
            d1= max(d1,d);
            x= min(0ll,x)+arr[i];
            x1= min(x,x1);
        }
        if (x1==sum||k==1)
            return max(sum1,d1)%N;
        else
            return max({sum1,d1,sum-x1})%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}