#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int countPairs(vector<vector<int>>& coordinates, int k) {
        unordered_map<ll,int>m;
        int n=coordinates.size(),ans=0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j <= k; ++j) {
                ans+=m[(ll)(j^coordinates[i][0])<<32|(coordinates[i][1]^(k-j))];
            }
            m[(ll)coordinates[i][0]<<32|coordinates[i][1]]++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}