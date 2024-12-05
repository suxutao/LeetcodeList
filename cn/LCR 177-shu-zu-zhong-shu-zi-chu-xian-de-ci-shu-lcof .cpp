#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> sockCollocation(vector<int>& sockets) {
        int n=sockets.size(),xo=accumulate(sockets.begin(), sockets.end(),0,bit_xor<>()),m=1,x=0,y=0;
        while (!(m&xo)){
            m<<=1;
        }
        for (auto &i: sockets){
            if (i&m)
                x^=i;
            else
                y^=i;
        }
        return {x,y};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}