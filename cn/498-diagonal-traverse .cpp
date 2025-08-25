#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size(),k=m+n-1,x=0,y=0;
        vector<int>ans{mat[0][0]};
        for (int i = 1; i < k; ++i) {
            if (i&1){
                if (y<n-1)
                    ++y;
                else
                    ++x;
                while (x<m&&y>=0){
                    ans.push_back(mat[x][y]);
                    ++x;--y;
                }
                --x;++y;
            }else{
                if (x<m-1)
                    ++x;
                else
                    ++y;
                while (y<n&&x>=0){
                    ans.push_back(mat[x][y]);
                    --x;++y;
                }
                ++x;--y;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}