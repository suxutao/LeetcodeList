#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n=points.size(),ans=0;
        ranges::sort(points,[&](auto&a,auto&b){
            if (a[0]==b[0])
                return a[1]<b[1];
            return a[0]>b[0];
        });
        for (int i = 0; i < n - 1; ++i) {
            int r=0,j;
            for (j = i+1; j < n; ++j) {
                if (points[j][1]>=points[i][1]){
                    r=points[j][1];
                    ans++;
                    break;
                }
            }
            for (; j < n; ++j) {
                if (points[j][1]<r&&points[j][1]>=points[i][1]){
                    r=points[j][1];
                    ans++;
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}