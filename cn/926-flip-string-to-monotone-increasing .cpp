#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minFlipsMonoIncr(string s) {
        if (s.length()==1)
            return 0;
        int ans=0,temp;
        for (int i = 0; i < s.length(); ++i) {
            ans+=(s[i]-'0');
        }
        temp=ans;
        for (int i = s.length()-1; i >=0 ; --i) {
            if (s[i]=='1'){
                temp--;
                ans=min(ans,temp);
            }else{
                temp++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}