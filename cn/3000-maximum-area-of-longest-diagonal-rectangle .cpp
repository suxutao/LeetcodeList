#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        vector<int>v(dimensions.size());
        int duijiao=0,ans=0;
        for (int i = 0; i < dimensions.size(); ++i) {
            int a=dimensions[i][0]*dimensions[i][0]+dimensions[i][1]*dimensions[i][1];
            if (a>duijiao){
                duijiao=a;
                ans=dimensions[i][0]*dimensions[i][1];
            }else if (a==duijiao){
                ans= max(ans,dimensions[i][0]*dimensions[i][1]);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}