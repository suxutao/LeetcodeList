#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n=tickets.size(),ans=0;
        while (tickets[k]){
            for (int i = 0; i < n; ++i) {
                if (tickets[i]){
                    tickets[i]--;
                    ans++;
                    if (i==k&&tickets[k]==0)
                        break;
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