#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxmiumScore(vector<int>& cards, int cnt) {
        vector<int>qi(1),ou(1);
        int ans=0;
        for (int i = 0; i < cards.size(); ++i) {
            if (cards[i]&1)
                qi.push_back(cards[i]);
            else
                ou.push_back(cards[i]);
        }
        sort(qi.begin()+1, qi.end(),greater<>());
        sort(ou.begin()+1, ou.end(),greater<>());
        for (int i = 1; i < qi.size(); ++i) {
            qi[i]+=qi[i-1];
        }
        for (int i = 1; i < ou.size(); ++i) {
            ou[i]+=ou[i-1];
        }
        for (int i = 0; i <= cnt; i+=2) {
            if (i>=qi.size()||cnt-i>=ou.size())
                continue;
            ans= max(ans,qi[i]+ou[cnt-i]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}