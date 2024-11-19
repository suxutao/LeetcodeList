#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> substringXorQueries(string s, vector<vector<int>>& queries) {
        int n=queries.size();
        vector<vector<int>>vv;
        unordered_map<int,vector<int>>m;
        for (int i = 0; i < s.size(); ++i) {
            int x=0;
            for (int j = 0; j <= 30&&i+j<s.size(); ++j) {
                x=(x<<1)|(s[i+j]-'0');
                if (m[x].empty())
                    m[x]={i,i+j};
                else{
                    if (j<m[x][1]-m[x][0])
                        m[x]={i,i+j};
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            if (!m[queries[i][0]^queries[i][1]].empty()){
                vv.push_back(m[queries[i][0]^queries[i][1]]);
            }else{
                vv.push_back({-1,-1});
            }
        }
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}