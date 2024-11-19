#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int m=rowSum.size(),n=colSum.size();
        vector<vector<int>>vv(m,vector<int>(n,0));
        int a=0,b=0;
        while (a<m&&b<n){
            int c= min(rowSum[a],colSum[b]);
            vv[a][b]+=c;
            rowSum[a]-=c;
            colSum[b]-=c;
            if (rowSum[a]==0)
                a++;
            if (colSum[b]==0)
                b++;
        }
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}