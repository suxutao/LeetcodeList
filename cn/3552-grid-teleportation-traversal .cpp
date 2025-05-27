#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minMoves(vector<string>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        bool vis[26]{};
        int arr[4][2]{{0,1},{1,0},{-1,0},{0,-1}};
        vector<pair<int,int>>g[26];
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (isupper(matrix[i][j])){
                    g[matrix[i][j]-'A'].emplace_back(i,j);
                }
            }
        }
        deque<pair<int,int>>d;
        vector<vector<int>>dis(m,vector<int>(n,INT_MAX));
        dis[0][0]=0;
        d.emplace_back(0,0);
        while (!d.empty()){
            auto [x,y]=d.front();
            d.pop_front();
            if (x==m-1&&y==n-1)
                return dis[x][y];
            for (auto [a,b]: arr){
                a+=x;b+=y;
                if (a<0||b<0||a>=m||b>=n||matrix[a][b]=='#')
                    continue;
                if (dis[x][y]+1<dis[a][b]){
                    dis[a][b]=1+dis[x][y];
                    d.emplace_back(a,b);
                }
            }
            if (isupper(matrix[x][y])&&!vis[matrix[x][y]-'A']){
                vis[matrix[x][y]-'A']=true;
                for (auto &[a,b]: g[matrix[x][y]-'A']){
                    if (dis[x][y]<dis[a][b]){
                        dis[a][b]=dis[x][y];
                        d.emplace_front(a,b);
                    }
                }
            }
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<string>v{"A..",".A.","..."};
    Solution().minMoves(v);
    return 0;
}