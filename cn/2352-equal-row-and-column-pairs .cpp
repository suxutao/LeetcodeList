#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    map<vector<int>,int>m;
    int equalPairs(vector<vector<int>>& grid) {
        int ans=0;
        for (vector<int>&item: grid){
            m[item]++;
        }
        for (int j = 0; j < grid[0].size(); ++j) {
            vector<int>temp(grid.size());
            for (int i = 0; i < grid.size(); ++i) {
                temp[i]=grid[i][j];
            }
            ans+=m[temp];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}