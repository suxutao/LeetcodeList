#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        typedef long long ll;
        ll ans=0,temp=0;
        while(temp<neededApples){
            ans++;
            temp+=12*ans*ans;
        }
        return ans*8;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}