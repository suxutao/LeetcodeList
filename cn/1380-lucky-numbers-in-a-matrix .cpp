#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m=matrix.size();
        vector<int>v,line(m);
        for (int i = 0; i < m; ++i) {
            bool a=true;
            line[i]=min_element(matrix[i].begin(), matrix[i].end())-matrix[i].begin();
            for (int j = 0; j < m; ++j) {
                if (matrix[j][line[i]]>matrix[i][line[i]]){
                    a= false;
                    break;
                }
            }
            if (a)
                v.push_back(matrix[i][line[i]]);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}