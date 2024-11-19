#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string smallestBeautifulString(string s, int k) {
        int n=s.size(),i=n-1;
        k+='a';s[i]++;
        while (i<n){
            if (s[i]==k){
                if (i==0)
                    return "";
                s[i]='a';
                s[--i]++;
            }else if (i&&s[i]==s[i-1]||i>1&&s[i]==s[i-2]){
                s[i]++;
            }else{
                ++i;
            }
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}