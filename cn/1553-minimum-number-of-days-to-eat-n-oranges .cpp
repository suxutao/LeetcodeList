#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    map<int,int>m;
    int minDays(int n) {
        if (n==1)
            return 1;
        if (n==2||n==3)
            return 2;
        if (m[n])
            return m[n];
        int ans,a=n%3,b=n%2;
        ans= min(1+a+minDays(n/3),1+b+minDays(n/2));
        return m[n]=ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}