#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size(),n=image[0].size(),old=image[sr][sc];
        vector<bitset<55>>vis(m);
        int arr[4][2]={{0,1},{1,0},{-1,0},{0,-1}};
        auto dfs=[&](auto&&dfs,int x,int y)->void {
            if (image[x][y]!=old)
                return;
            image[x][y]=color;
            for (auto [i,j]: arr){
                i+=x;j+=y;
                if (i<0||j<0||i>=m||j>=n||vis[i][j]){
                    continue;
                }
                vis[i][j]=1;
                dfs(dfs,i,j);
            }
        };
        dfs(dfs,sr,sc);
        return image;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}