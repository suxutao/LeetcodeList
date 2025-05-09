#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int cnt=0;
    vector<vector<int>>v;
    void dfs(int x,int y,int l){
        if (l==1){
            v[x][y]=cnt++;
            return;
        }
        dfs(x,y+l/2,l/2);
        dfs(x+l/2,y+l/2,l/2);
        dfs(x+l/2,y,l/2);
        dfs(x,y,l/2);
    }
    vector<vector<int>> specialGrid(int n) {
        if (n==0)
            return {{0}};
        v.assign(1<<n,vector<int>(1<<n));
        dfs(0,0,1<<n);
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}