#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<int,vector<int>>m;
    vector<int> beautifulArray(int n) {
        if (m.contains(n))
            return m[n];
        int cnt=0;
        vector<int>ans(n);
        if (n==1){
            ans[0]=1;
        }else{
            for (auto &i: beautifulArray((n + 1) / 2)){
                ans[cnt++]=2*i-1;
            }
            for (auto &i: beautifulArray(n / 2)){
                ans[cnt++]=2*i;
            }
        }
        m[n]=ans;
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}