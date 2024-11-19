#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool sumGame(string num) {
        int cnt=count(num.begin(), num.end(),'?'),n=num.size(),sum1=0,sum2=0,c1=0,c2=0;
        if (cnt&1)
            return true;
        for (int i = 0; i < n / 2; ++i) {
            if (num[i]!='?')
                sum1+=num[i]-'0';
            else
                c1++;
        }
        for (int i = n/2; i < n; ++i) {
            if (num[i]!='?')
                sum2+=num[i]-'0';
            else
                c2++;
        }
        if (cnt==0)
            return sum1!=sum2;
        return sum1-sum2!=(c2-c1)*9/2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}