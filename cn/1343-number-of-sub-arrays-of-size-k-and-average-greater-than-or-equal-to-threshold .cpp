#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int ans=0,n=arr.size();
        double t=0;
        for (int i = 0; i < k; ++i) {
            t+=arr[i];
        }
        ans+=t/k>=threshold;
        for (int i = k; i < n; ++i) {
            t+=arr[i]-arr[i-k];
            ans+=t/k>=threshold;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}