#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool dfs(vector<double>&v){
        int n=v.size();
        if (n==1)
            return fabs(v[0]-24)<1e-5;
        bool ans = false;
        for (int k = 0; k < 4; ++k) {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (i!=j){
                        vector<double>re;
                        if (k==0){
                            re.push_back(v[i]+v[j]);
                        }else if (k==1){
                            re.push_back(v[i]-v[j]);
                        }else if (k==2){
                            re.push_back(v[i]*v[j]);
                        }else{
                            re.push_back(v[i]/v[j]);
                        }
                        for (int l = 0; l < n; ++l) {
                            if (l!=i&&l!=j)
                                re.push_back(v[l]);
                        }
                        ans|=dfs(re);
                    }
                }
            }
        }
        return ans;
    }
    bool judgePoint24(vector<int>& cards) {
        vector<double>v(4);
        for (int i = 0; i < 4; ++i) {
            v[i]=cards[i];
        }
        return dfs(v);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}