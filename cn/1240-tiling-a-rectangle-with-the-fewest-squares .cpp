#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    map<pair<int,int>,int>ma;
    int tilingRectangle(int n, int m) {
        if (n==0||m==0)
            return 0;
        if (n==m)
            return 1;
        if (n==1||m==1)
            return max(n,m);
        if (n>m)
            swap(n,m);
        if (n==2){
            if (m&1){
                return m/2+2;
            }else{
                return m/2;
            }
        }
        if (ma[{n,m}])
            return ma[{n,m}];
        int ans=INT_MAX;
        for (int i = 1; i <= n; ++i) {
            ans= min(ans, 1+ min(tilingRectangle(n-i,i)+tilingRectangle(m-i,n),
                                 tilingRectangle(n-i,m)+ tilingRectangle(m-i,i)));
        }
        ma[{n,m}]=ans;
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().tilingRectangle(11,13);
    return 0;
}