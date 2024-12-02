#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int n,cnt=0;
    vector<int>col,dig1,dig2;
    void dfs(int pos){
        if (pos==n){
            cnt++;
            return;
        }
        for (int i = 0; i < n; ++i) {
            if (!col[i]&&!dig1[i+pos]&&!dig2[i-pos+n]){
                col[i]=dig1[i+pos]=dig2[i-pos+n]=1;
                dfs(pos+1);
                col[i]=dig1[i+pos]=dig2[i-pos+n]=0;
            }
        }
    }
    int totalNQueens(int n) {
        if (n==1)
            return 1;
        this->n=n;
        col.resize(n);
        dig1.resize(n*2+1);
        dig2.resize(n*2+1);
        dfs(0);
        return cnt;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}