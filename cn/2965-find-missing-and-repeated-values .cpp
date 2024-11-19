#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>v(2);
        unordered_map<int,int>u;
        int m=grid.size();
        for (int i = 1; i <= m * m; ++i) {
            u[i]=1;
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < m; ++j) {
                u[grid[i][j]]--;
            }
        }
        for (const auto &item: u){
            if (item.second==1)
                v[1]=item.first;
            if (item.second==-1)
                v[0]=item.first;
            if (v[0]&&v[1])
                break;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}