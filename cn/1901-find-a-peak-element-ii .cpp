#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int l=0,r=mat.size()-2;
        while (l<=r){
            int a=(l+r)>>1;
            int b= max_element(mat[a].begin(),mat[a].end())-mat[a].begin();
            if (mat[a][b]>mat[a+1][b])
                r=a-1;
            else
                l=a+1;
        }
        return {l, int(std::max_element(mat[l].begin(), mat[l].end())-mat[l].begin())};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}