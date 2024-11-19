#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    map<int,vector<int>>m;
    vector<vector<int>>vv;
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        for (int i = 0; i < groupSizes.size(); ++i) {
            m[groupSizes[i]].push_back(i);
        }
        vector<int>v;
        for (auto &i: m){
            for (int j = 0; j < i.second.size(); j+=i.first) {
                v.clear();
                for (int k = j; k < i.first+j; ++k) {
                    v.push_back(i.second[k]);
                }
                vv.push_back(v);
            }
        }
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}