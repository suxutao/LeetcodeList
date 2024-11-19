#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    int s[1002][1002];
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int m=str1.size(),n=str2.size();
        for (int i = 1; i <= m; ++i) {
            s[i][0]=i;
        }
        for (int i = 1; i <= n; ++i) {
            s[0][i]=i;
        }
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (str1[i-1]==str2[j-1]){
                    s[i][j]=s[i-1][j-1]+1;
                }else{
                    s[i][j]= min(s[i-1][j],s[i][j-1])+1;
                }
            }
        }
        string ans;
        int i=str1.size(),j=str2.size();
        while (i&&j){
            if (str1[i-1]==str2[j-1]){
                ans+=str1[i-1];
                i--;j--;
            }else if (s[i][j]==1+s[i-1][j]){
                ans+=str1[--i];
            }else{
                ans+=str2[--j];
            }
        }
        reverse(ans.begin(), ans.end());
        if (i){
            ans=str1.substr(0,i)+ans;
        }else{
            ans=str2.substr(0,j)+ans;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    string a="abac",b="cab";
    Solution().shortestCommonSupersequence(a,b);
    return 0;
}