#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ull = unsigned long long;
    const ull P=1313131;
    int countCells(vector<vector<char>>& grid, string pattern) {
        int m=grid.size(),n=grid[0].size(),np=pattern.size(),ans=0;
        ull target;
        vector<ull>p(np+1),t(m*n+1);
        vector<vector<bool>>vr(m,vector<bool>(n)),vc(n,vector<bool>(m));
        p[0]=1;
        for (int i = 1; i <= np; ++i) {
            p[i]=p[i-1]*P;
            t[i]=t[i-1]*P+pattern[i-1];
        }
        target=t[np];
        int r=0,c=0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                t[i*n+j+1]=t[i*n+j]*P+grid[i][j];
                if (i*n+j+1>=np&&target==t[i*n+j+1]-t[i*n+j+1-np]*p[np]){
                    if (r*n+c<=i*n+j-np){
                        for (int k = i*n+j-np+1; k <= i * n + j; ++k) {
                            vr[k/n][k%n]=1;
                        }
                    }else{
                        for (int k = r*n+c; k <= i * n + j; ++k) {
                            vr[k/n][k%n]=1;
                        }
                    }
                    r=i;c=j;
                }
            }
        }
        r=0,c=0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                t[i*m+j+1]=t[i*m+j]*P+grid[j][i];
                if (i*m+j+1>=np&&target==t[i*m+j+1]-t[i*m+j+1-np]*p[np]){
                    if (r*m+c<=i*m+j-np){
                        for (int k = i*m+j-np+1; k <= i * m + j; ++k) {
                            vc[k/m][k%m]=1;
                        }
                    }else{
                        for (int k = r*m+c; k <= i * m + j; ++k) {
                            vc[k/m][k%m]=1;
                        }
                    }
                    r=i;c=j;
                }
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                ans+=vr[i][j]&&vc[j][i];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<char>>v{{'x','e'},{'e','t'},{'e','c'},{'y','e'},{'n','c'}};
    Solution().countCells(v,"e");
    return 0;
}