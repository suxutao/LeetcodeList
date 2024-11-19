#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class neighborSum {
public:
    vector<vector<int>>v;
    int m,n;
    unordered_map<int,pair<int,int>>ma;
    neighborSum(vector<vector<int>>& grid) {
        v=grid;
        m=v.size(),n=v[0].size();
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                ma[v[i][j]]={i,j};
            }
        }
    }
    int wei(int x,int y){
        if (x<0||y<0||x>=m||y>=n)
            return 0;
        return v[x][y];
    }

    int adjacentSum(int value) {
        int x=ma[value].first,y=ma[value].second;
        return wei(x+1,y)+ wei(x-1,y)+ wei(x,y+1)+ wei(x,y-1);
    }
    
    int diagonalSum(int value) {
        int x=ma[value].first,y=ma[value].second;
        return wei(x+1,y+1)+ wei(x-1,y-1)+ wei(x-1,y+1)+ wei(x+1,y-1);
    }
};

/**
 * Your neighborSum object will be instantiated and called as such:
 * neighborSum* obj = new neighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}