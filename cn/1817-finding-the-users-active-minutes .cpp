#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii = pair<int, int>;
    set<pii>s;
    unordered_map<int,int>m;
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int>v(k);
        for (auto &item: logs){
            pii p={item[0],item[1]};
            if (!s.count(p)){
                s.insert(p);
                m[p.first]++;
            }
        }
        for (auto &item: m){
            v[item.second-1]++;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}