#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool f1(vector<int>&a,vector<int>&b){
        for (int i = 0; i < a.size(); ++i) {
            if (a[i]!=b[i])
                return false;
        }
        return true;
    }
    bool f2(vector<int>&a,vector<int>&b){
        for (int i = 0; i < a.size(); ++i) {
            if (a[i]==b[i])
                return false;
        }
        return true;
    }
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        int m=matrix.size(),ans=0;
        for (int i = 0; i < m; ++i) {
            int cnt=0;
            for (int j = 0; j < m; ++j) {
                cnt+=f1(matrix[i],matrix[j])||f2(matrix[i],matrix[j]);
            }
            ans= max(ans,cnt);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}