#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findSubstringInWraproundString(string s) {
        int n=s.size(),ans=1,mx[26]{},cnt=1;
        mx[s[0]-'a']=1;
        for (int i = 1; i < n; ++i) {
            if (s[i]-'a'==(s[i-1]-'a'+1)%26){
                cnt++;
            }else{
                cnt=1;
            }
            if (cnt>mx[s[i]-'a']){
                ans+=cnt-mx[s[i]-'a'];
                mx[s[i]-'a']=cnt;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}