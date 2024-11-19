#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int arr[11][11]={};
    queue<pair<int,int>>q;
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),ans=-1,yi=0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j]==1){
                    yi++;
                }else if (grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        if (q.empty()){
            if (yi){
                return -1;
            }else{
                return 0;
            }
        }
        while (!q.empty()){
            int s=q.size();
            for (int i = 0; i < s; ++i) {
                int a=q.front().first,b=q.front().second;
                q.pop();
                if (a-1>=0&&!arr[a-1][b]&&grid[a-1][b]==1){
                    grid[a-1][b]=2;
                    arr[a-1][b]=1;
                    q.emplace(a-1,b);
                    yi--;
                }if (a+1<m&&!arr[a+1][b]&&grid[a+1][b]==1){
                    grid[a+1][b]=2;
                    arr[a+1][b]=1;
                    yi--;
                    q.emplace(a+1,b);
                }if (b-1>=0&&!arr[a][b-1]&&grid[a][b-1]==1){
                    grid[a][b-1]=2;
                    yi--;
                    arr[a][b-1]=1;
                    q.emplace(a,b-1);
                }if (b+1<n&&!arr[a][b+1]&&grid[a][b+1]==1){
                    yi--;
                    grid[a][b+1]=2;
                    arr[a][b+1]=1;
                    q.emplace(a,b+1);
                }
            }
            ans++;
        }
        return yi?-1:ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}