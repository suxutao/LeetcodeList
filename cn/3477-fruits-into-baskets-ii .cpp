#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=fruits.size(),ans=0;
        vector<bool>vis(n);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j <= n; ++j) {
                if (j==n){
                    ++ans;
                }else{
                    if (!vis[j]&&baskets[j]>=fruits[i]){
                        vis[j]=1;
                        break;
                    }
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