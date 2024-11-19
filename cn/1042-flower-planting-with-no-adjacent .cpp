#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<int,vector<int>>m;
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        vector<int>v(n);
        for (auto &i: paths){
            m[i[1]].emplace_back(i[0]);
            m[i[0]].emplace_back(i[1]);
        }
        for (int i = 1; i <= n; ++i) {
            set<int>s={1,2,3,4};
            for (int j = 0; j < m[i].size(); ++j) {
                s.erase(v[m[i][j]-1]);
            }
            v[i-1]=*s.begin();
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}