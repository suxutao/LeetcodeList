#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int s1=mat.size(),s2=mat[0].size();
        int row=0,ans=0,temp;
        for (int i = 0; i < s1; ++i) {
            temp=0;
            for (int j = 0; j < s2; ++j) {
                if (mat[i][j]==1)
                    temp++;
            }
            if (temp>ans){
                row=i;
                ans=temp;
            }
        }
        return {row,ans};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}