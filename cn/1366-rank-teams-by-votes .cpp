#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string rankTeams(vector<string>& votes) {
        int m=votes.size(),n=votes[0].size();
        string s=votes[0];
        unordered_map<char,unordered_map<int,int>>ma;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                ++ma[votes[i][j]][j+1];
            }
        }
        std::sort(s.begin(), s.end(),[&](char&a,char&b){
            for (int i = 1; i <= n; ++i) {
                if (ma[a][i]==ma[b][i])
                    continue;
                if (ma[a][i]<ma[b][i]){
                    return false;
                }else{
                    return true;
                }
            }
            return a<b;
        });
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}