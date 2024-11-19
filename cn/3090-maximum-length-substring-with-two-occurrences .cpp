#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumLengthSubstring(string s) {
        int ans=2,arr['z'+1]={},l=0,r=0;
        while (r<s.size()) {
            if (arr[s[r]]<2){
                ++arr[s[r++]];
                ans= max(ans,r-l);
            }else{
                --arr[s[l++]];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}