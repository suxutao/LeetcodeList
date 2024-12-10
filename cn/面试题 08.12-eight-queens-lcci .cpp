#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int n;
    vector<int>row,col,diag1,diag2;
    vector<vector<string>>vs;
    void dfs(int i){
        if (i==n){
            vector<string>v;
            for (int j = 0; j < n; ++j) {
                v.push_back(string(row[j],'.')+"Q"+string(n-row[j]-1,'.'));
            }
            vs.push_back(v);
            return;
        }
        for (int j = 0; j < n; ++j) {
            if (!col[j]&&!diag1[i+j]&&!diag2[i-j+n]){
                row[i]=j;
                diag1[i+j]=diag2[i-j+n]=col[j]=1;
                dfs(i+1);
                diag1[i+j]=diag2[i-j+n]=col[j]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        this->n=n;
        row.resize(n);
        col.resize(n);
        diag1.resize(n<<1|1);
        diag2.resize(n<<1|1);
        dfs(0);
        return vs;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}