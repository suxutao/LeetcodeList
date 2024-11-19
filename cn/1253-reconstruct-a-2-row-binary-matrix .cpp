#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        int n=colsum.size(),acc=accumulate(colsum.begin(), colsum.end(),0),er=0;
        vector<vector<int>>v(2,vector<int>(n));
        for (int i = 0; i < n; ++i) {
            er+=colsum[i]==2;
        }
        if (acc!=upper+lower||er>lower||er>upper)
            return {};
        for (int i = 0; i < n; ++i) {
            if (colsum[i]==2){
                v[0][i]++;v[1][i]++;
                upper--;lower--;
            }else if (colsum[i]==1){
                if (upper>=lower){
                    v[0][i]++;
                    upper--;
                }else{
                    v[1][i]++;
                    lower--;
                }
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}