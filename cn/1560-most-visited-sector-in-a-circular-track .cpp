#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        int nr=rounds.size(),mx=0;
        vector<int>cnt(n+1),ans;
        cnt[rounds[0]]=1;
        for (int i = 1; i < nr; ++i) {
            int to=rounds[i-1]%n+1;
            while (to!=rounds[i]){
                ++cnt[to];
                to=to%n+1;
            }
            ++cnt[rounds[i]];
        }
        for (int i = 1; i <= n; ++i) {
            if (cnt[i]>mx){
                ans.clear();
                mx=cnt[i];
                ans.push_back(i);
            }else if (cnt[i]==mx){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}