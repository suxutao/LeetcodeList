#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int,vector<int>>pos;
        vector<int>v;
        for (int i = 0; i < adjacentPairs.size(); ++i) {
            pos[adjacentPairs[i][0]].push_back(adjacentPairs[i][1]);
            pos[adjacentPairs[i][1]].push_back(adjacentPairs[i][0]);
        }
        for (auto &[a,b]: pos){
            if (b.size()==1){
                v.push_back(a);
                break;
            }
        }
        v.push_back(pos[v.back()][0]);
        for (int i = 0; i < adjacentPairs.size()-1; ++i) {
            for (auto &j: pos[v.back()]){
                if (j!=v[v.size()-2]){
                    v.push_back(j);
                    break;
                }
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}