#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int score(vector<string>& cards, char x) {
        int cnt1[10]{},cnt2[10]{},n=cards.size(),cnt=0,ans=0;
        string xx(2,x);
        for (int i = 0; i < n; ++i) {
            if (cards[i]==xx)
                ++cnt;
            if (cards[i][0]==x)
                cnt1[cards[i][1]-'a']++;
            if (cards[i][1]==x)
                cnt2[cards[i][0]-'a']++;
        }
        for (int i = 0; i <= cnt; ++i) {
            int sum1=0,sum2=0,mx1=0,mx2=0;
            cnt1[x-'a']=i;
            cnt2[x-'a']=cnt-i;
            for (int j = 0; j < 10; ++j) {
                sum1+=cnt1[j];
                sum2+=cnt2[j];
                mx1=max(mx1,cnt1[j]);
                mx2=max(mx2,cnt2[j]);
            }
            ans= max(ans,(sum1>=mx1*2?sum1/2:sum1-mx1)+(sum2>=mx2*2?sum2/2:sum2-mx2));
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}