#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n=points.size(),ans=0;
        std::sort(points.begin(), points.end(),[&](auto&a,auto&b){
            if (a[0]==b[0])
                return a[1]>b[1];
            return a[0]<b[0];
        });
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                if (points[i][1]>=points[j][1]){
                    bool b=true;
                    for (int k = i+1; k < j; ++k) {
                        if (points[i][1]>=points[k][1]&&points[j][1]<=points[k][1]){
                            b= false;
                        }
                    }
                    if (b)
                        ++ans;
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