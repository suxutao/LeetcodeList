#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans(n,'a');
        int sum=n;
        for (int i = n-1; i>=0; --i) {
            if (k>sum+25){
                sum+=25;
                ans[i]='z';
            }else{
                ans[i]+=k-sum;
                break;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}