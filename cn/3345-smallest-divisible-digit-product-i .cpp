#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int ji(int i){
        int ans=1;
        while (i){
            ans*=i%10;
            i/=10;
        }
        return ans;
    }
    int smallestNumber(int n, int t) {
        int temp=n;
        while (ji(temp)%t){
            temp++;
        }
        return temp;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}