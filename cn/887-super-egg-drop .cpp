#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int dfs(int i,int j){
        if (i==1||j==1)
            return j+1;
        return dfs(i-1,j-1)+ dfs(i,j-1);
    }
    int superEggDrop(int k, int n) {
        for (int i = 1; i <= n; ++i) {
            if (dfs(k,i)>n){
                return i;
            }
        }
        return 0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}