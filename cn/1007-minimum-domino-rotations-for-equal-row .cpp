#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n=tops.size(),ans=n,t;
        for (int i = 1; i <= 6; ++i) {
            t=0;
            for (int j = 0; j < n; ++j) {
                if (tops[j]!=i&&bottoms[j]!=i) {
                    t=-1;
                    break;
                }
                if (tops[j]!=i&&bottoms[j]==i)
                    ++t;
            }
            if (~t){
                ans= min(ans, t);
            }
        }
        for (int i = 1; i <= 6; ++i) {
            t=0;
            for (int j = 0; j < n; ++j) {
                if (tops[j]!=i&&bottoms[j]!=i) {
                    t=-1;
                    break;
                }
                if (bottoms[j]!=i&&tops[j]==i)
                    ++t;
            }
            if (~t){
                ans= min(ans, t);
            }
        }
        return ans==n?-1:ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}