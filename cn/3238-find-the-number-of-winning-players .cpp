#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        int ans=0;
        unordered_map<int,int>cnt[n],MAX;
        for (auto &i: pick){
            ++cnt[i[0]][i[1]];
            if (cnt[i[0]][i[1]]>MAX[i[0]]){
                MAX[i[0]]=cnt[i[0]][i[1]];
            }
        }
        for (int i = 0; i < n; ++i) {
            if (MAX[i]>=i+1)
                ++ans;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}