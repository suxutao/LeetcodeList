#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int arr[4][2]={{0,1},{1,0},{-1,0},{0,-1}};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size(),cnt=0;
        vector<vector<int>>v(m,vector<int>(n));
        vector<vector<bool>>vb(m,vector<bool>(n));
        queue<int>q;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (!mat[i][j])
                    q.push(i<<16|j);
            }
        }
        while (!q.empty()){
            int sz=q.size();
            for (int i = 0; i < sz; ++i) {
                int x=q.front()>>16,y=q.front()<<16>>16;
                q.pop();
                v[x][y]=cnt;
                for (auto &[a,b]: arr){
                    if (x+a<0||y+b<0||x+a>=m||y+b>=n||vb[x+a][y+b]||!mat[x+a][y+b])
                        continue;
                    vb[x+a][y+b]=1;
                    q.push((x+a)<<16|(y+b));
                }
            }
            cnt++;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}