#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long matrixSumQueries(int n, vector<vector<int>>& queries) {
        ll ans=0,lie=n,hang=n;
        unordered_set<ll>s;
        for (int i=queries.size()-1;i>=0;--i){
            if (s.contains((ll)queries[i][0]<<32|queries[i][1]))
                continue;
            s.insert((ll)queries[i][0]<<32|queries[i][1]);
            if (queries[i][0]==0){
                --hang;
                ans+=lie*queries[i][2];
            }else{
                --lie;
                ans+=hang*queries[i][2];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}