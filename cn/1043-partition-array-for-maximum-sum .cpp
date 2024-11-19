#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size(),MAX=0;
        vector<int>v(n);
        for (int i = 0; i < k; ++i) {
            MAX= max(MAX,arr[i]);
            v[i]=MAX*(i+1);
        }
        for (int i = k; i < n; ++i) {
            v[i]=arr[i]+v[i-1];
            int temp=arr[i];
            for (int j = 2; j <= k; ++j) {
                temp= max(temp,arr[i-j+1]);
                v[i]= max(v[i],v[i-j]+temp*j);
            }
        }
        return v[n-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}