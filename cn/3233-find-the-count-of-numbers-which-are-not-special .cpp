#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int nonSpecialCount(int l, int r) {
        int a= ceil(sqrt(l)),b= sqrt(r),ans=0;
        vector<bool>vb(b+1,1);
        vector<int>prime;
        vb[1]=0;
        for (int i = 2; i <= b; ++i) {
            if (vb[i]){
                prime.push_back(i);
                ans+=i>=a;
            }
            for (int j : prime) {
                if (i*j>b) break;
                vb[i*j]=0;
                if (i%j==0) break;
            }
        }
        return r-l+1-ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){

    return 0;
}