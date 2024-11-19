#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end(),greater<>());
        sort(trainers.begin(), trainers.end(),greater<>());
        int ans=0,p=0;
        for (int i = 0; i < trainers.size(); ++i) {
            while (p<players.size()&&trainers[i]<players[p]) ++p;
            if (p==players.size())
                break;
            ++ans;++p;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}