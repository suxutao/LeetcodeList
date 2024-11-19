#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size(),ans=1;
        for (int i = 0; i < n; ++i) {
            map<pair<int,int>,int>m;
            for (int j = 0; j < n; ++j) {
                if (j==i)
                    continue;
                int a=points[i][0]-points[j][0];
                int b=points[i][1]-points[j][1];
                int c=__gcd(abs(a), abs(b));
                a/=c;b/=c;
                m[{a,b}]++;
            }
            for (auto &[_,a]: m){
                ans= max(ans,a+1);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}