#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string longestNiceSubstring(string s) {
        int n=s.size(),pos=0,len=0;
        for (int i = 0; i < n; ++i) {
            int low=0,up=0;
            for (int j = i; j < n; ++j) {
                if (islower(s[j]))
                    low|=1<<(s[j]-'a');
                else
                    up|=1<<(s[j]-'A');
                if (low==up&&(j-i+1)>len){
                    pos=i;
                    len=j-i+1;
                }
            }
        }
        return s.substr(pos,len);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}