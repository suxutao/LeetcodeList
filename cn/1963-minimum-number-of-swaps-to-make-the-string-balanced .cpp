#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minSwaps(string s) {
        int t=0,cnt=0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]==']'){
                if (cnt==0){
                    ++t;
                }else{
                    --cnt;
                }
            }else{
                ++cnt;
            }
        }
        return (t+1)/2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}