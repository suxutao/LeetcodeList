#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<bool> canMakePaliQueries(string s, vector<vector<int>>& queries) {
        vector<bool>v(queries.size());
        vector<int>sum(s.size()+1);
        for (int i = 0; i < s.size(); ++i) {
            int j=1<<(s[i]-'a');
            sum[i+1]=sum[i]^j;
        }
        for (int i = 0; i < v.size(); ++i) {
            int a=queries[i][0],b=queries[i][1],c=queries[i][2];
            v[i]=__builtin_popcount(sum[a]^sum[b+1])/2<=c;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}