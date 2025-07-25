#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size(),pos=0,mn,sum=0;
        vector<int>ans(k);
        for (int i = 0; i < k; ++i) {
            sum+=abs(arr[i]-x);
        }
        mn=sum;
        for (int i = k; i < n; ++i) {
            sum+=abs(arr[i]-x)-abs(arr[i-k]-x);
            if (sum<mn){
                mn=sum;
                pos=i-k+1;
            }
        }
        for (int i = 0; i < k; ++i) {
            ans[i]=arr[i+pos];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}