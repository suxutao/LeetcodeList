#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int closestToTarget(vector<int>& arr, int target) {
        int ans=INT_MAX,n=arr.size();
        for (int i = 0; i < n; ++i) {
            ans= min(ans, abs(arr[i]-target));
            for (int j = i-1; j>=0&&(arr[i]&arr[j])!=arr[j] ; --j) {
                arr[j]&=arr[i];
                ans= min(ans, abs(arr[j]-target));
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}