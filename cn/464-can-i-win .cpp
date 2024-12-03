#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int mx,target;
    unordered_map<int,bool>cache;
    bool dfs(int mask,int sum){
        if (cache.contains(mask))
            return cache[mask];
        bool ans= false;
        for (int i = 0; i < mx; ++i) {
            if (!(mask>>i&1)){
                if (sum+i+1>=target){
                    return true;
                }else{
                    ans|=!dfs(mask|(1<<i),sum+i+1);
                    if (ans)
                        break;
                }
            }
        }
        return cache[mask]=ans;
    }
    bool canIWin(int maxChoosableInteger, int desiredTotal) {
        mx=maxChoosableInteger;
        target=desiredTotal;
        if ((1+mx)*mx<target*2)
            return false;
        return dfs(0,0);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}