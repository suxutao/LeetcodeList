#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>>v(n+1,vector<int>(n+1));
        for (auto &i: queries){
            int a=i[0],b=i[1],c=i[2],d=i[3];
            v[a][b]++;
            v[a][d+1]--;
            v[c+1][b]--;
            v[c+1][d+1]++;
        }
        for (int i = 1; i < n; ++i) {
            v[i][0]+=v[i-1][0];
        }
        for (int i = 1; i < n; ++i) {
            v[0][i]+=v[0][i-1];
        }
        for (int i = 1; i < n; ++i) {
            for (int j = 1; j < n; ++j) {
                v[i][j]+=v[i-1][j]+v[i][j-1]-v[i-1][j-1];
            }
            v[i].pop_back();
        }
        v[0].pop_back();
        v.pop_back();
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}