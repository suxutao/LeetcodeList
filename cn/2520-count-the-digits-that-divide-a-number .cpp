#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countDigits(int num) {
        int temp=num,ans=0;
        while (temp){
            if (num%(temp%10)==0)
                ans++;
            temp/=10;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}