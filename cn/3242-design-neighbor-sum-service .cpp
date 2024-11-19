#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class NeighborSum {
public:
    int m,n;
    vector<vector<int>>v;
    unordered_map<int,pair<int,int>>ma;
    int ar[4][2]{{1,0},{0,1},{0,-1},{-1,0}};
    int arr[4][2]{{1,1},{-1,1},{1,-1},{-1,-1}};
    NeighborSum(vector<vector<int>>& grid) {
        v=grid;
        m=v.size();n=v[0].size();
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                ma[v[i][j]]={i,j};
            }
        }
    }
    
    int adjacentSum(int value) {
        auto[x,y]=ma[value];
        int ans=0;
        for (auto &i: ar){
            int tx=i[0]+x,ty=y+i[1];
            if (tx<0||ty<0||tx>=m||ty>=n)
                continue;
            ans+=v[tx][ty];
        }
        return ans;
    }
    
    int diagonalSum(int value) {
        auto[x,y]=ma[value];
        int ans=0;
        for (auto &i: arr){
            int tx=i[0]+x,ty=y+i[1];
            if (tx<0||ty<0||tx>=m||ty>=n)
                continue;
            ans+=v[tx][ty];
        }
        return ans;
    }
};

/**
 * Your NeighborSum object will be instantiated and called as such:
 * NeighborSum* obj = new NeighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}