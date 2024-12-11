#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii = pair<int, int>;
    int maxJumps(vector<int>& arr, int d) {
        int n=arr.size();
        vector<int>dp(n,1);
        vector<pii>v;
        for (int i = 0; i < n; ++i) {
            v.emplace_back(arr[i],i);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; ++i) {
            int pos=v[i].second;
            for (int j = pos+1; j <= min(n-1,pos+d); ++j) {
                if (arr[pos]>arr[j]){
                    dp[pos]= max(dp[pos],dp[j]+1);
                }else{
                    break;
                }
            }
            for (int j = pos-1; j >= max(0,pos-d); --j) {
                if (arr[pos]>arr[j]){
                    dp[pos]= max(dp[pos],dp[j]+1);
                }else{
                    break;
                }
            }
        }
        return ranges::max(dp);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}