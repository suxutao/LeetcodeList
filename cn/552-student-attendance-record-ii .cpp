#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    int m[100002][3][2]{};
    int dfs(int a,int l,int cnt){
        if (a==2||l==3)
            return 0;
        if (cnt==0)
            return 1;
        if (m[cnt][l][a])
            return m[cnt][l][a];
        int ans=0;
        if (a==0)
            ans=(ans+dfs(1,0,cnt-1))%N;
        if (l<2)
            ans=(ans+dfs(a,l+1,cnt-1))%N;
        ans=(ans+dfs(a,0,cnt-1))%N;
        return m[cnt][l][a]=ans;
    }
    int checkRecord(int n) {
        return dfs(0,0,n);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}