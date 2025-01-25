#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int arr[4][2]{{0,1},{1,0},{-1,0},{0,-1}};
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m=isWater.size(),n=isWater[0].size(),cnt=0;
        queue<pair<int,int>>q;
        vector<vector<bool>>vis(m,vector<bool>(n));
        vector<vector<int>>ans(m,vector<int>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (isWater[i][j]){
                    q.emplace(i,j);
                    vis[i][j]=1;
                }
            }
        }
        while (!q.empty()){
            int sz=q.size();
            for (int i = 0; i < sz; ++i) {
                auto [x,y]=q.front();
                ans[x][y]=cnt;
                for (auto &j: arr){
                    if (x+j[0]>=0&&x+j[0]<m&&y+j[1]>=0&&y+j[1]<n&&!vis[x+j[0]][y+j[1]]){
                        vis[x+j[0]][y+j[1]]=1;
                        q.emplace(x+j[0],y+j[1]);
                    }
                }
                q.pop();
            }
            cnt++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}