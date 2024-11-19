#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool winnerOfGame(string colors) {
        int a=0,b=0,cnt=0,c=colors[0];
        colors.push_back('C');
        for (int i = 0; i < colors.size(); ++i) {
            if (colors[i]==c){
                cnt++;
            }else{
                if (c=='A')
                    a+=max(0,cnt-2);
                else
                    b+=max(0,cnt-2);
                cnt=1;
                c=colors[i];
            }
        }
        return a>b;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}