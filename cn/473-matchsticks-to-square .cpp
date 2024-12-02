#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int n,arr[4]{},sum=0;
    bool dfs(int pos,vector<int>&v){
        if (pos==n){
            if (arr[0]==arr[1]&&arr[1]==arr[2]&&arr[2]==arr[3])
                return true;
            else
                return false;
        }
        for (int i = 0; i < 4; ++i) {
            arr[i]+=v[pos];
            if (arr[i]>sum/4){
                arr[i]-=v[pos];
                continue;
            }
            if(dfs(pos+1,v))
                return true;
            arr[i]-=v[pos];
        }
        return false;
    }
    bool makesquare(vector<int>& matchsticks) {
        n=matchsticks.size();
        sum=accumulate(matchsticks.begin(), matchsticks.end(),0);
        if (sum%4)
            return false;
        sort(matchsticks.begin(), matchsticks.end(),greater<>());
        return dfs(0,matchsticks);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}