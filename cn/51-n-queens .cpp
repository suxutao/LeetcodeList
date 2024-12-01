#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<string>>vvs;
    vector<int>row,col,dia1,dia2;
    int n;
    void dfs(int pos){
        if (pos==n){
            vector<string>vs(n,string(n,'.'));
            for (int i = 0; i < n; ++i) {
                vs[i][row[i]]='Q';
            }
            vvs.push_back(vs);
        }
        for (int i = 0; i < n; ++i) {
            if (!col[i]&&!dia1[i+pos]&&!dia2[i-pos+n]){
                row[pos]=i;
                col[i]=dia1[i+pos]=dia2[i-pos+n]=1;
                dfs(pos+1);
                col[i]=dia1[i+pos]=dia2[i-pos+n]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        if (n==1)
            return {{"Q"}};
        this->n=n;
        row.resize(n);
        col.resize(n);
        dia1.resize(n<<1|1);
        dia2.resize(n<<1|1);
        dfs(0);
        return vvs;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().solveNQueens(4);
    return 0;
}