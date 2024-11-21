#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int dis(string&s,string&t){
        int ans=0,n=s.size();
        for (int i = 0; i < n; ++i) {
            ans+=s[i]!=t[i];
        }
        return ans;
    }
    int minOperations(string s) {
        int n=s.size();
        string s1(n,'1'),s2(n,'0');
        for (int i = 0; i < n; ++i) {
            if (i&1){
                s1[i]='0';
                s2[i]='1';
            }
        }
        return min(dis(s,s1), dis(s,s2));
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}