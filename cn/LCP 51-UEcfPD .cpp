#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int perfectMenu(vector<int>& materials, vector<vector<int>>& cookbooks, vector<vector<int>>& attribute, int limit) {
        int n=materials.size(),m=cookbooks.size(),ans=-1;
        for (int i = 1; i < 1 << m; ++i) {
            int li=0,hao=0;
            vector<int>v(materials);
            for (int j = 0; j < m; ++j) {
                if (i>>j&1){
                    for (int k = 0; k < n; ++k) {
                        v[k]-=cookbooks[j][k];
                        if (v[k]<0){
                            goto exit;
                        }
                    }
                    hao+=attribute[j][0];
                    li+=attribute[j][1];
                }
            }
            if (li>=limit)
                ans= max(ans,hao);
            exit:
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}