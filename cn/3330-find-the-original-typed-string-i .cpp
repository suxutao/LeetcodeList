#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int possibleStringCount(string word) {
        int n=word.size(),ans=1,cnt=0;
        char c=word[0];
        for (int i = 0; i < n; ++i) {
            if (word[i]==c){
                cnt++;
            }else{
                c=word[i];
                ans+=cnt-1;
                cnt=1;
            }
        }
        return ans+cnt-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}