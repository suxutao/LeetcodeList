#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int f(string&s){
        int l=0,r=s.size()-1,ans=0;
        while (l<r){
            ans+=s[l]!=s[r];
            ++l;--r;
        }
        return ans;
    }
    int minFlips(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),row=0,col=0;
        for (int i = 0; i < m; ++i) {
            string t;
            for (int j = 0; j < n; ++j) {
                t.push_back('0'+grid[i][j]);
            }
            row+=f(t);
        }
        for (int i = 0; i < n; ++i) {
            string t;
            for (int j = 0; j < m; ++j) {
                t.push_back('0'+grid[j][i]);
            }
            col+=f(t);
        }
        return min(col,row);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}