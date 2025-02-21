#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int n;
    bool vis[50][50]{};
    array<int,2> dp[50][50];
    array<int,2> dfs(string&s,int l,int r){
        if (l==r){
            return {s[l]=='0',s[l]=='1'};
        }
        if (vis[l][r])
            return dp[l][r];
        vis[l][r]=1;
        int ans1=0,ans0=0;
        for (int i = l; i <= r; ++i) {
            if (s[i]=='^'){
                auto a= dfs(s,l,i-1);
                auto b= dfs(s,i+1,r);
                ans1+=a[0]*b[1]+a[1]*b[0];
                ans0+=a[0]*b[0]+a[1]*b[1];
            }else if (s[i]=='&'){
                auto a= dfs(s,l,i-1);
                auto b= dfs(s,i+1,r);
                ans1+=a[1]*b[1];
                ans0+=a[0]*b[0]+a[0]*b[1]+a[1]*b[0];
            }else if (s[i]=='|'){
                auto a= dfs(s,l,i-1);
                auto b= dfs(s,i+1,r);
                ans1+=a[0]*b[1]+a[1]*b[0]+a[1]*b[1];
                ans0+=a[0]*b[0];
            }
        }
        return dp[l][r]={ans0,ans1};
    }
    int countEval(string s, int result) {
        n=s.size();
        auto ans= dfs(s,0,n-1);
        return ans[result];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}