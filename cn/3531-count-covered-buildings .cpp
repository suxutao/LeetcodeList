#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        int ans=0;
        unordered_map<int,set<int>>row,col;
        for (auto &v: buildings){
            row[v[0]].insert(v[1]);
            col[v[1]].insert(v[0]);
        }
        for (auto &v: buildings){
            if (*row[v[0]].begin()!=v[1]&&*row[v[0]].rbegin()!=v[1]&&*col[v[1]].begin()!=v[0]&&*col[v[1]].rbegin()!=v[0])
                ++ans;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}