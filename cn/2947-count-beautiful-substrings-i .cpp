#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int beautifulSubstrings(string s, int k) {
        int n=s.size(),ans=0;
        for (int i = 0; i < n; ++i) {
            int a=0,b=0;
            for (int j = i; j < n; ++j) {
                if (s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
                    ++a;
                else
                    ++b;
                if (a==b&&a*b%k==0)
                    ans++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}