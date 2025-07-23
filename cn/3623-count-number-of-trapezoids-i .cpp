#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int countTrapezoids(vector<vector<int>>& points) {
        ll t=0,ans=0,a;
        unordered_map<int,ll>m;
        for (auto & point : points) {
            t+=m[point[1]]++;
            a=m[point[1]]*(m[point[1]]-1)/2;
            ans=(ans+(m[point[1]]-1)*(t-a)%N)%N;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}