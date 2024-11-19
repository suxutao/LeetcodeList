#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int ans=0,zuo=0,you=0,hen=0;
        for (auto &i: moves){
            if (i=='L'){
                zuo++;
            }else if (i=='R'){
                you++;
            }else{
                hen++;
            }
        }
        return max(abs(zuo+hen-you), abs(you+hen-zuo));
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}