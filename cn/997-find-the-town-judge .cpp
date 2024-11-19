#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>in(n+1),out(n+1);
        int cnt=0,ans;
        for (auto &i: trust){
            in[i[1]]++;
            out[i[0]]++;
        }
        for (int i = 1; i <= n; ++i) {
            if (in[i]==n-1&&out[i]==0)
                cnt++,ans=i;
        }
        return cnt==1?ans:-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}