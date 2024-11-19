#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<string>>vvs;
    vector<string>vs;
    bool jianyan(int pos,int n){
        int row=pos/n,col=pos%n;
        for (int i = 0; i < n; ++i) {
            if (i==row)
                continue;
            if (vs[i][col]=='Q')
                return false;
        }
        for (int i = 0; i < n; ++i) {
            if (i==col)
                continue;
            if (vs[row][i]=='Q')
                return false;
        }
        for (int i = 1; row+i<n&&col+i<n; ++i) {
            if (vs[row+i][col+i]=='Q')
                return false;
        }
        for (int i = 1; row-i>=0&&col-i>=0; ++i) {
            if (vs[row-i][col-i]=='Q')
                return false;
        }
        for (int i = 1; row+i<n&&col-i>=0; ++i) {
            if (vs[row+i][col-i]=='Q')
                return false;
        }
        for (int i = 1; row-i>=0&&col+i<n; ++i) {
            if (vs[row-i][col+i]=='Q')
                return false;
        }
        return true;
    }
    void hui(int pos,int n,int count){
        if (pos>=n*n&&count==n) {
            vvs.push_back(vs);
            return;
        }else if (pos>=n*n){
            return;
        }
        for (int i = pos; i < n * n; ++i) {
            while(i<n*n&&!jianyan(i,n))
                i++;
            if (i==n*n){
                if (count==n){
                    vvs.push_back(vs);
                }
                return;
            }
            int row=i/n,col=i%n;
            vs[row][col]='Q';
            hui(i+1,n,count+1);
            vs[row][col]='.';
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        if (n==1)
            return {{"Q"}};
        string s;
        for (int i = 0; i < n; ++i) {
            s+=".";
        }
        vs.assign(n,s);
        hui(0,n,0);
        return vvs;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().solveNQueens(4);
    return 0;
}