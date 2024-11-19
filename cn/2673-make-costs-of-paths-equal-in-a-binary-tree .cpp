#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int ans=0;
    int dfs(vector<int>&v,int pos){
        if (pos*2>v.size()){
            return v[pos-1];
        }
        int zuo=dfs(v,pos*2);
        int you= dfs(v,pos*2+1);
        ans+= abs(zuo-you);
        return max(zuo,you)+v[pos-1];
    }
    int minIncrements(int n, vector<int>& cost) {
        dfs(cost,1);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}