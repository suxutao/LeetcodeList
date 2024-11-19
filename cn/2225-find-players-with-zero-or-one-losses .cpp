#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>v(2,vector<int>());
        map<int,int>m;set<int>s;
        for (auto &item: matches){
            m[item[1]]++;
            s.insert(item[0]);
            s.insert(item[1]);
        }
        for (auto &item: s){
            if (m[item]==0)
                v[0].push_back(item);
            else if (m[item]==1)
                v[1].push_back(item);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}