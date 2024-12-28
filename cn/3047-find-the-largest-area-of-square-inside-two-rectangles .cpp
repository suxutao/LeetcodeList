#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
        int n=bottomLeft.size(),bian=0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i==j)
                    continue;
                if (bottomLeft[i][0]>=topRight[j][0]&&bottomLeft[i][1]>=topRight[j][1]||bottomLeft[j][0]>=topRight[i][0]&&bottomLeft[j][1]>=topRight[i][1])
                    continue;
                int a,b,c,d;
                a= max(bottomLeft[i][0],bottomLeft[j][0]);
                b= max(bottomLeft[i][1],bottomLeft[j][1]);
                c= min(topRight[i][0], topRight[j][0]);
                d= min(topRight[i][1], topRight[j][1]);
                bian= max(bian, min(c-a,d-b));
            }
        }
        return (ll)bian*bian;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}