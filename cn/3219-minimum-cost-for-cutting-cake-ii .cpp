#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        ll ans=0;
        int a=0,b=0;
        sort(horizontalCut.begin(), horizontalCut.end(),greater<>());
        sort(verticalCut.begin(), verticalCut.end(),greater<>());
        while (a<m-1&&b<n-1){
            if (horizontalCut[a]>=verticalCut[b]){
                ans+=(b+1)*horizontalCut[a++];
            }else{
                ans+=(a+1)*verticalCut[b++];
            }
        }
        while (a<m-1)
            ans+=n*horizontalCut[a++];
        while (b<n-1)
            ans+=m*verticalCut[b++];
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}