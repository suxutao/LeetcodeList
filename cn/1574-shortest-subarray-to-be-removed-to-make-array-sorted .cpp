#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n=arr.size(),ans=n-1,qian=n-1,hou=0;
        for (int i = 1; i < n; ++i) {
            if (arr[i]<arr[i-1]){
                qian=i-1;
                ans= min(ans,n-qian);
                break;
            }
        }
        if (qian==n-1)
            return 0;
        for (int i = n-1; i ; --i) {
            if (arr[i]<arr[i-1]){
                hou=i;
                ans= min(ans,hou);
                break;
            }
        }
        for (int i = 0; i <= qian; ++i) {
            int t= lower_bound(arr.begin()+hou, arr.end(),arr[i])-arr.begin();
            ans= min(ans,t-i-1);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}