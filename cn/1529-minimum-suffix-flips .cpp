#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minFlips(string target) {
        int jia=0,ans=0,temp;
        for (int i = 0; i < target.size(); ++i) {
            temp=target[i]-'0'+jia;
            if (temp&1){
                ++jia;
                ++ans;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}