#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int ans=0,m=mat.size(),n=mat[0].size();
        vector<vector<int>>v(m,vector<int>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (j==0)
                    v[i][j]=mat[i][j];
                else if (mat[i][j])
                    v[i][j]=1+v[i][j-1];
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int temp=v[i][j];
                for (int k = i; k>=0&&temp ; --k) {
                    temp= min(temp,v[k][j]);
                    ans+=temp;
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